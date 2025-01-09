void setup() {
pinMode(2,INPUT_PULLUP);
// it goes about into an unknown state (sudo state)
// no idea about its default state(when the switch is off)

pinMode(13,OUTPUT);


}

void loop() {
 int val = digitalRead(2);
 if(val == 1)
 {
  digitalWrite(13, HIGH);
 }
 if(val == 0)
 {
  digitalWrite(13, LOW);
 }
}
