void setup() {
  int i, j;
  for (i= 11; i<= 13; i++)       //11,12,13 by default 1.
  {  //columns
    pinMode(i, INPUT_PULLUP);     // pullup mean 
  }
  for (j= 2; j<= 5; j++)
  {//rows
    pinMode(j, OUTPUT);
  }
  Serial.begin(9600);   //9600 
}

void loop() {
  // case 1.
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);

  if (digitalRead(11) == 0)
  {
    Serial.println("1");  
  }
  else
  if (digitalRead(12) == 0)
  {
    Serial.println("2");  
  }
  else
  if (digitalRead(13) == 0)
  {
    Serial.println("3");  
  }
  delay(50);
  // case 2.
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);

  if (digitalRead(11) == 0)
  {
    Serial.println("4");  
  }
  else
  if (digitalRead(12) == 0)
  {
    Serial.println("5");  
  }
  else
  if (digitalRead(13) == 0)
  {
    Serial.println("6");  
  }
  delay(50);
  // case 3.
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);

  if (digitalRead(11) == 0)
  {
    Serial.println("7");  
  }
  else
  if (digitalRead(12) == 0)
  {
    Serial.println("8");  
  }
  else
  if (digitalRead(13) == 0)
  {
    Serial.println("9");  
  }
  delay(50);
  // case 4.
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);

  if (digitalRead(11) == 0)
  {
    Serial.println("*");  
  }
  
  if (digitalRead(12) == 0)
  {
    Serial.println("0");  
  }
  
  if (digitalRead(13) == 0)
  {
    Serial.println("#");  
  }
  delay(50);
}
