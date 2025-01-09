#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  //rs,en,d4,d5,d6,d7
void setup() {
  lcd.begin(16, 2);  //this function initialize lcd ,  (16,2)-> is size
  lcd.print("Welcome !!");
  lcd.setCursor(0,1);  //it is use to change the printing location.
  lcd.print("World");
  delay(500);  
  lcd.clear();     //clear the data of lcd.
}
void loop() {
  int j,i,k; 
  for(j =0; j<=15; j++){
    for(i=0; i<=2;i++ ){
    lcd.setCursor(j,0);   //(col,row)
    lcd.print("radhe");
    delay(50);
    lcd.clear();
    }
}
}




/*int j,i,k;  //col,row
 for( j = 0, k = 15; j <= 11, k >=0; j++, k--){
   for( i = 0; i < 1; i++ ){
     lcd.setCursor(j,i);   //(col,row)
     lcd.print("radhe");
     }
 
   for(i=1; i<2;i++ ){
     lcd.setCursor(k,i);   //(col,row)
     lcd.print("shyama");
    
   }
    delay(200);
     lcd.clear();
}*/

 /*for(j =0; j<=11; j++){
    for(i=0; i<=2;i++ ){
    lcd.setCursor(j,0);   //(col,row)
    lcd.print("radhe");
    delay(50);
    lcd.clear();
    }
}
   for(j =11; j>=0; j--){
    for(i=1; i<=2;i++ ){
    lcd.setCursor(j,0);   //(col,row)
    lcd.print("radhe");
    delay(50);
    lcd.clear();
    }
}*/

/* for(j =0; j<=15; j++){
    for(i=0; i<=2;i++ ){
    lcd.setCursor(j,0);   //(col,row)
    lcd.print("radhe");
    lcd.setCursor(j,1);   //(col,row)
    lcd.print("radhe");
    delay(50);
    lcd.clear();
    }
}*/
