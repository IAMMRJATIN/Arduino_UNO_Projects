#include<Servo.h>
Servo servo_1;    //Object of heder file.

void setup() {
servo_1.attach(9);   // PWM pin.
/*servo_1.write(0);
servo_1.write(30);
servo_1.write(60);
servo_1.write(90);
servo_1.write(180);
servo_1.write(0);
*/}

/*void loop() {
  servo_1.write(0);
  delay(50);
servo_1.write(30);
  delay(50);
servo_1.write(60);
  delay(50);
servo_1.write(90);
  delay(50);
servo_1.write(180);
  delay(50);
servo_1.write(0);
  delay(50);
}*/

void loop(){
  int i,j;
  for (i=0; i<=180; i++)
  {
    servo_1.write(i);
    delay(50);
  }
  for (i=180; i>=0; i--)
  {
    servo_1.write(i);
    delay(50);
  }
  
}
