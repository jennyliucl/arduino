
int frequency[63] = { 0,330,330,330,0,330,330,330,0, 
330,392,262,294,330,0,0,0, 
349,349,349,349,349,330,330,330, 
330,294,294,330,294,0,392,0, 
330,330,330,0,330,330,330,0, 
330,392,262,294,330,0,0,0, 
349,349,349,349,349,330,330,330, 
392,392,349,294,262,0 };

void setup() //猜炸彈
{
  Serial.begin(9600);
  pinMode(13, OUTPUT); //蜂鳴器
  pinMode(2,OUTPUT); //超聲波
  pinMode(A5,INPUT); //超聲波
  pinMode(12,OUTPUT); //LED燈
  pinMode(11,OUTPUT); //LED燈
  pinMode(10,OUTPUT); //LED燈
  pinMode(9,OUTPUT); //LED燈
  pinMode(8,OUTPUT); //LED燈
  pinMode(7,INPUT); //按鈕
  pinMode(6,INPUT); //按鈕
  pinMode(5,INPUT); //按鈕
  pinMode(4,INPUT); //按鈕
  pinMode(3,INPUT); //按鈕
}

void loop() {
  
  for (int thisNote=0; thisNote<9999999;thisNote++) 
  { 
    float duration,distance;
    digitalWrite(2,HIGH);
    delayMicroseconds(10);
    digitalWrite(2,LOW);
    //在trig腳位給超音波測距儀10us脈波  
    duration = pulseIn(A5,HIGH); 
    //量測從echo腳位回來脈波的時間
    distance = (duration/2)*0.034;
    //距離 = (時間/2)*音速
    //音速 = 340m/s = 0.034cm/us
    Serial.print(distance);
    Serial.println(" cm");

    if (distance<=30){
      int t=distance*30;
      tone(13, frequency[thisNote], 100);
      delay(t);
      if (thisNote<63)
      {
        
          if (digitalRead(6) == HIGH) //bomb
          {
            digitalWrite(11, HIGH);
            break;
          }
          
          else if(digitalRead(7) == HIGH)
          {
            digitalWrite(12, HIGH);
            delay(500);
            digitalWrite(12, LOW);
          }
          else if (digitalRead(5) == HIGH)
          {
            digitalWrite(10, HIGH);
            delay(500);
            digitalWrite(10, LOW);
          }
          else if (digitalRead(4) == HIGH)
          {
            digitalWrite(9, HIGH);
            delay(500);
            digitalWrite(9, LOW);
          } 
          else if (digitalRead(3) == HIGH)
          {
            digitalWrite(8, HIGH);
            delay(500);
            digitalWrite(8, LOW);
          }
      }
      else
      {
        thisNote=thisNote%63;
        if (digitalRead(6) == HIGH) //bomb
          {
            digitalWrite(11, HIGH);
            break;
          }
          
          else if(digitalRead(7) == HIGH)
          {
            digitalWrite(12, HIGH);
            delay(500);
            digitalWrite(12, LOW);
          }
          else if (digitalRead(5) == HIGH)
          {
            digitalWrite(10, HIGH);
            delay(500);
            digitalWrite(10, LOW);
          }
          else if (digitalRead(4) == HIGH)
          {
            digitalWrite(9, HIGH);
            delay(500);
            digitalWrite(9, LOW);
          } 
          else if (digitalRead(3) == HIGH)
          {
            digitalWrite(8, HIGH);
            delay(500);
            digitalWrite(8, LOW);
          }
      }    
    }
    else{
      tone(13, frequency[thisNote], 100);
      delay(1000);
      if (thisNote<63)
      {
        
          if (digitalRead(6) == HIGH) //bomb
          {
            digitalWrite(11, HIGH);
            break;
          }
          
          else if(digitalRead(7) == HIGH)
          {
            digitalWrite(12, HIGH);
            delay(500);
            digitalWrite(12, LOW);
          }
          else if (digitalRead(5) == HIGH)
          {
            digitalWrite(10, HIGH);
            delay(500);
            digitalWrite(10, LOW);
          }
          else if (digitalRead(4) == HIGH)
          {
            digitalWrite(9, HIGH);
            delay(500);
            digitalWrite(9, LOW);
          } 
          else if (digitalRead(3) == HIGH)
          {
            digitalWrite(8, HIGH);
            delay(500);
            digitalWrite(8, LOW);
          }
      }
      else
      {
        thisNote=thisNote%63;
        if (digitalRead(6) == HIGH) //bomb
          {
            digitalWrite(11, HIGH);
            break;
          }
          
          else if(digitalRead(7) == HIGH)
          {
            digitalWrite(12, HIGH);
            delay(500);
            digitalWrite(12, LOW);
          }
          else if (digitalRead(5) == HIGH)
          {
            digitalWrite(10, HIGH);
            delay(500);
            digitalWrite(10, LOW);
          }
          else if (digitalRead(4) == HIGH)
          {
            digitalWrite(9, HIGH);
            delay(500);
            digitalWrite(9, LOW);
          } 
          else if (digitalRead(3) == HIGH)
          {
            digitalWrite(8, HIGH);
            delay(500);
            digitalWrite(8, LOW);
          }
      }
    }
     
    
  }
  tone(13,1500,2000);
  delay(9999999);
}
