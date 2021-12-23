void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);//Rosso
 pinMode(12,OUTPUT);//Verde
 pinMode(7,INPUT);//Pulsante
}

int attesaCasuale;
int attesaCasualeMs;

void loop() {

  if(digitalRead(7) == HIGH){
    Serial.println("Ascensore Chiamato");
    attesa();
  }

}

void attesa(){
  attesaCasuale = random(2,10);
  attesaCasualeMs = attesaCasuale * 1000;
  digitalWrite(13, HIGH);
  Serial.println("Aspetta ");
  Serial.println(attesaCasuale);
  Serial.println(" secondi");
  delay(attesaCasualeMs);
  digitalWrite(13,LOW);
  arrivo();  
  
}

void arrivo(){
  digitalWrite(12,HIGH);
  delay(3000);
  digitalWrite(12,LOW);
}
