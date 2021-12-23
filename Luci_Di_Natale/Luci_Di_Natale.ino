void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  //pinMode(7, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), cambia, FALLING);
}
 
int scelta=0;

void cambia(){
  scelta++;
}

void tuttoSpento(){
  for(int i=13;i>7;i--){
    digitalWrite(i, LOW);
  }
  }
void primAnimazione(){
  for(int i=13;i>7;i--){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
  }
  }

void secondAnimazione(){
  for(int i=13;i>7;i--){
    digitalWrite(i, HIGH);  
  }
  delay(300);
  for(int i=13;i>7;i--){
    digitalWrite(i, LOW);  
  }
  delay(300);
  }

void terzAnimazione(){
  for(int i=0;i>3;i++){
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
  }
  for(int i=0;i>3;i++){
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    digitalWrite(13,LOW);
  }
}

void loop()
{

  
  /*if(digitalRead(7)==HIGH){
    
    scelta=scelta+1;
  }*/

  switch(scelta){
    case 1:
      primAnimazione();
      break;
    case 2:
      secondAnimazione();
      break;
    case 3:
      terzAnimazione();
      break;
    case 4:
      tuttoSpento();
      scelta = 0;
    default:
      break;
    }
}
