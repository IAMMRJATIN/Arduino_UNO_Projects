//simple motor rotate with l293d
void setup() {
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 

}

void loop() {
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(3000);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  delay(3000);
}
