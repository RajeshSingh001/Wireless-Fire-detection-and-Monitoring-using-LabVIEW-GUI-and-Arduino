// the setup routine runs once when you press reset:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() 
{  
  int FSR1 = Serial.read();;
   // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if(FSR1 == 10) 
  { 
   lcd.clear();     
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("Fire Detected");
   delay(50);
  } 
   else if(FSR1 == 20) 
  {
   lcd.clear();
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,1);
   lcd.print("Fire Not Detected");
   delay(50); 
  }
 
}
