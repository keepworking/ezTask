# ezTask 아두이노 라이브러리

ezTask 아두이노 라이브러리는 일정 시간주기로 동작을 실행하는 기능을 사용하기 쉽도록 제공된 라이브러리입니다.



## 코드 알아보기

#### eztask 객체 선언

ezTask 객체 구조
```cpp
ezTask task1(cycle,function);
//cycle 함수가 실행될 주기로 밀리초 단위입니다.
//function 은 실행할 함수입니다.

```

선언법은 다음과 같습니다.

외부 함수 사용

```cpp
ezTask task1(1000,blink);

void blink(){//ezTask로 실행할 아두이노 함수를 만듭니다.
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
}
```


람다식 사용

```cpp
ezTask task1(1000,[](){//따로 함수를 만들지 않고 람다식으로 바로 넣어줍니다.
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
});
```

#### ezTask사용하기

```cpp
void loop(){
  task1.run(); //선언한 ezTask객체의 run함수를 실행합니다.
  /*
    loop문안에 run함수외의 다른 함수가 들어갈시 동작에 지장이 있을 수 있습니다.
    delay함수등 동작에 긴시간이 걸리는 함수는 사용을 자제하세요
  */
}
```

[![N|Solid](http://mechasolution.com/shop/data/editor/1471925335.jpg)](http://www.mechasolution.com)
