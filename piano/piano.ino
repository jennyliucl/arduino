int frequency[7] = {262,294,330,349,392,440,494};
void setup()
{
    pinMode(2, OUTPUT);
    pinMode(8, INPUT);  
    pinMode(9, INPUT);  
    pinMode(10, INPUT);     
}
void loop() 
{  
    if (digitalRead(8)==HIGH)
    {
      tone(2,330,300);
      delay(500);
      noTone(2);
    }
    else if (digitalRead(9)==HIGH)
    {
      tone(2,294,300);
      delay(500);
      noTone(2);
    }
    else if (digitalRead(10)==HIGH)
    {
      tone(2,262,300);
      delay(500);
      noTone(2);
    }
}
