int light[10] = {8,10,9,8,9,8,10,9,10,0};

void setup() { //打地鼠
  pinMode(13, OUTPUT); //蜂鳴器
  pinMode(3,INPUT); //按鈕1
  pinMode(4,INPUT); //按鈕2
  pinMode(5,INPUT); //按鈕3
  pinMode(8,OUTPUT); //燈1
  pinMode(9,OUTPUT); //燈2
  pinMode(10,OUTPUT); //燈3
  Serial.begin(9600);
}

void loop() {
  for (int i=0;i<10;i++){
    Serial.println(i);

    if(light[i]==8){
      digitalWrite(8,HIGH);
      delay(1000);
      if (digitalRead(3)==HIGH){
        digitalWrite(8,LOW);
      }
      else{
        digitalWrite(8,LOW);
        delay(500);
        digitalWrite(8,HIGH);
        delay(500);
        digitalWrite(8,LOW);
        delay(500);
        digitalWrite(8,HIGH);
        delay(999999);
      }
    }

    else if(light[i]==9){
      digitalWrite(9,HIGH);
      delay(1000);
      if (digitalRead(4)==HIGH){
        digitalWrite(9,LOW);
      }
      else{
        digitalWrite(9,LOW);
        delay(500);
        digitalWrite(9,HIGH);
        delay(500);
        digitalWrite(9,LOW);
        delay(500);
        digitalWrite(9,HIGH);
        delay(999999);
      }
    }

    else if(light[i]==10){
      digitalWrite(10,HIGH);
      delay(1000);
      if (digitalRead(5)==HIGH){
        digitalWrite(10,LOW);
      }
      else{
        digitalWrite(10,LOW);
        delay(500);
        digitalWrite(10,HIGH);
        delay(500);
        digitalWrite(10,LOW);
        delay(500);
        digitalWrite(10,HIGH);
        delay(999999);
      }
    }

    else{
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      tone(13,1500,2000);
    }
  }
}
