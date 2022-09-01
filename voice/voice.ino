void setup() //分貝計
{
  pinMode(13,INPUT); 
  pinMode(2,OUTPUT); 
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT); 
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT); 
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);  
  Serial.begin(9600);
}
void loop() 
{
  int analogValue = analogRead(0);
  Serial.println(analogValue); // 類比輸出
  //當類比輸出大於某個門檻值時，數位輸出 = 0
  delay(100);

  if(analogValue<=500)
  {
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
  }
  else if(analogValue>500 && analogValue<=550)
  {
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
  }
   else if(analogValue>550 && analogValue<=600)
  {
    digitalWrite(7,HIGH);
    delay(500);
    digitalWrite(7,LOW);
  }
   else if(analogValue>600 && analogValue<=650)
  {
    digitalWrite(6,HIGH);
    delay(500);
    digitalWrite(6,LOW);
  }
   else if(analogValue>650 && analogValue<=700)
  {
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
  }
   else if(analogValue>700 && analogValue<=750)
  {
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
  }
   else if(analogValue>750 && analogValue<=800)
  {
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
  }
   else
  {
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(2,LOW);
  }
}
