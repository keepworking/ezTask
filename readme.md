# ezTask �Ƶ��̳� ���̺귯��

ezTask �Ƶ��̳� ���̺귯���� ���� �ð��ֱ�� ������ �����ϴ� ����� ����ϱ� ������ ������ ���̺귯���Դϴ�.



## �ڵ� �˾ƺ���

#### eztask ��ü ����

ezTask ��ü ����
```cpp
ezTask task1(cycle,function);
//cycle �Լ��� ����� �ֱ�� �и��� �����Դϴ�.
//function �� ������ �Լ��Դϴ�.

```

������� ������ �����ϴ�.

�ܺ� �Լ� ���

```cpp
ezTask task1(1000,blink);

void blink(){//ezTask�� ������ �Ƶ��̳� �Լ��� ����ϴ�.
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
}
```


���ٽ� ���

```cpp
ezTask task1(1000,[](){//���� �Լ��� ������ �ʰ� ���ٽ����� �ٷ� �־��ݴϴ�.
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
});
```

#### ezTask����ϱ�

```cpp
void loop(){
  task1.run(); //������ ezTask��ü�� run�Լ��� �����մϴ�.
  /*
    loop���ȿ� run�Լ����� �ٸ� �Լ��� ���� ���ۿ� ������ ���� �� �ֽ��ϴ�.
    delay�Լ��� ���ۿ� ��ð��� �ɸ��� �Լ��� ����� �����ϼ���
  */
}
```
