/* 2016 yevgeny hong
  메카솔루션 ezTask 라이브러리
  블로깅 거리가 없어서 라이브러리를 만드는 우리의 심정을 누가 알아줄까
*/

#ifndef EZ_TASK
#define EZ_TASK

#if ARDUINO < 100
  #include "WProgram.h"
#else
    #include "Arduino.h"
#endif

class ezTask{
public:
  
  
  unsigned long Cycle;
  
  ezTask(unsigned long cycle, void (*userFunc)(void)){
    func = userFunc;
    Cycle = cycle;
  }

  void run(){
      if(!isrun){
        func();
        lastMillis = millis();
        isrun = true;
        return;
      }
      unsigned long now = millis();
      if(now < lastMillis){
        if((0xffffffff - lastMillis) + now < Cycle){
          return;
        }
      }
      else if(now - lastMillis < Cycle){
        return;
      }
      lastMillis = millis();
      func();
  }


private:
  void (*func)(void);
  unsigned long lastMillis = 0;
  boolean isrun = false;
};

#endif
