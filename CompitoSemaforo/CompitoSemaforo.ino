void setup() {
  pinMode(13,OUTPUT);//Rosso
  pinMode(12,OUTPUT);//Giallo
  pinMode(11,OUTPUT);//Verde
  pinMode(10,OUTPUT);//RossoPedoni
  pinMode(9,OUTPUT);//VerdePedoni
  pinMode(7,INPUT);//Pulsante
}

boolean rossoSpento = false;

void loop() {
  if(digitalRead(7)==HIGH){
    delay(1000);
    digitalWrite(11,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(8000);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(4000);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(2000);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(4000);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
  }
}
