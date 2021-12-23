void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

int cas;
char comando;
bool attivato;

void loop() {
  comando = Serial.read();
  if(comando == 'Y' || comando == 'y'){
    Serial.println("Pulsante Attivato");
    digitalWrite(12, HIGH);
    attivato = true;
    }else if(comando == 'n'|| comando == 'N'){
    Serial.println("Pulsante Disattivato");
    attivato = false;
    digitalWrite(12, LOW);
  }

  if(attivato == true){
    if(digitalRead(7) == HIGH){
      cas = random(1,11);
      Serial.print("Led acceso ");
      Serial.print(cas);
      Serial.println(" volte");
      for(int i = 0; i < cas; i++){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
      }
  }

}
}
