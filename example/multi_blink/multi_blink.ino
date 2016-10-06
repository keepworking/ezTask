#include <ezTask.h>

int LED1 = HIGH;
int LED2 = HIGH;
int LED3 = HIGH;


ezTask task1(1000,[](){
  digitalWrite(2,LED1 = !LED1);
});

ezTask task2(2000,[](){
  digitalWrite(3,LED2 = !LED2);
});

ezTask task3(3000,[](){
  digitalWrite(4,LED3 = !LED3);
});

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  task1.run();
  task2.run();
  task3.run();
}
