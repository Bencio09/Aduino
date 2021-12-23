void setup()
{
  pinMode(5, OUTPUT);//Rosso
  pinMode(6, OUTPUT);//Verde
  pinMode(7, INPUT);//Pulsante
  Serial.begin(9600);
}

long tempo;
long realTime;
bool pulsante = false;

void loop()
{
  if(digitalRead(7) == HIGH){
    if(pulsante == false){
      pulsante = true;
      tempo = millis();
    }
  }
  if(pulsante == true){
    if(digitalRead(7) == LOW){
      pulsante = false;
      realTime = millis() - tempo;

      Serial.println("Il pulsante è stato premuto per ");
      Serial.println(realTime);
      Serial.println(" ms");
    }
  }

  if(realTime > 0 && realTime < 1000){
    for(int i=0; i<2; i++){
        digitalWrite(5, HIGH);
        delay(500);
        digitalWrite(5, LOW);
        delay(500);
      }

      realTime = 0;
  }
  else if(realTime >= 1000){
    for(int i = 0;i < 255;i = i + 5){
      analogWrite(6,i);
      delay(100);
    }
    delay(250);
    for(int i = 255;i > 0;i = i - 5){
      analogWrite(6,i);
      delay(100);
    }
    realTime = 0;
  }
}
