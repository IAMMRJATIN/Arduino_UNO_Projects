#include<SoftwareSerial.h>
//SoftwareSerial BT(5,6);
void setup() {
  Serial.begin(9600);
  //BT.begin(9600);
  pinMode(13, OUTPUT);
  
}

void loop() {
  if (Serial.available()){
    char res = Serial.read();
    Serial.println(res);
    if(res=='Z'){
      
      }
  }
}
