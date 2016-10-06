#ifndef EZ_TASK
#define EZ_TASK

#if ARDUINO < 100
  #include "WProgram.h"
#else
    #include "Arduino.h"
#endif

class ezTask{
public:
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
      func();
      lastMillis = millis();
  }


private:
  void (*func)(void);
  unsigned long Cycle;
  unsigned long lastMillis = 0;
  boolean isrun = false;
};

#endif
