void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(12,OUTPUT);
}

void loop() 
{
  float duration,distance;
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  //在trig腳位給超音波測距儀10us脈波
  duration = pulseIn(10,HIGH); 
  //量測從echo腳位回來脈波的時間
  distance = (duration/2)*0.034;
  //距離 = (時間/2)*音速
  //音速 = 340m/s = 0.034cm/us
  Serial.print(distance);
  Serial.println(" cm");
  if (distance < 30)
  {
    tone(12,262,250);
    delay(distance*100);
  }
  else
  {
    noTone(12);
    delay(300);
  }
}
