void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int outside = analogRead(A0);
  Serial.println(outside);
  if (outside > 100){
    analogWrite(11,0);
  }
  else{
    analogWrite(11,255);
  }
  delay(300);
}
