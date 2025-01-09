void setup() {
  pinMode(2,INPUT);
  pinMode (13,OUTPUT);
}

void loop() {
  int ir =  digitalRead(2);
  if (ir== 0){
    digitalWrite(13,LOW);
  }
  if(ir==1){
    digitalWrite(13,HIGH);
  } 
}
