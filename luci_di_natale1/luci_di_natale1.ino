void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
int animazione = 0;
void loop()
{
  
  if(digitalRead(3)==HIGH){
    animazione++;
    if(animazione==4){
      animazione=0;
    }
    }
  
switch(animazione)
  {
    
  case 1: 
    
    if(digitalRead(3) == HIGH)
    {
      for(int i = 0; i < 1; i++)
      {
          digitalWrite(2, HIGH);
          delay(100);
          digitalWrite(2, LOW);

          digitalWrite(4, HIGH);
          delay(100);
          digitalWrite(4, LOW);

          digitalWrite(7, HIGH);
          delay(100);
          digitalWrite(7, LOW);

          digitalWrite(8, HIGH);
          delay(100);
          digitalWrite(8, LOW);

          digitalWrite(12, HIGH);
          delay(100);
          digitalWrite(12, LOW);

          digitalWrite(13, HIGH);
          delay(100);
          digitalWrite(13, LOW);
      }
    }
    break;
    

   case 2:
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    
  case 3:
 
    for(int i = 0; i < 3; i++)
    {
    	  digitalWrite(2, HIGH);
      	digitalWrite(4, HIGH);
      	digitalWrite(7, HIGH);
        delay(300);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
    }
    
    for(int i = 0; i < 3; i++)
    {
      	digitalWrite(8, HIGH);
      	digitalWrite(12, HIGH);
      	digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(8, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
    }
    break;
  } 
  
  }
