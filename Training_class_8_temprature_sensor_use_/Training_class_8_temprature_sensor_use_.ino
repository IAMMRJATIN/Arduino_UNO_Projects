void setup() {
 pinMode(A0,INPUT);  // This is not required, as A0 is already a analog input pin.
 Serial.begin(9600);
 
}

void loop() {
 int raw = analogRead(A0);  // To read analog values from temp sensor LM35 (0-1024)
 float mv = 4.88*A0;
 float temp = mv/10;  //degree  ,      datasheet  10mv
 Serial.println(temp);

 
}
