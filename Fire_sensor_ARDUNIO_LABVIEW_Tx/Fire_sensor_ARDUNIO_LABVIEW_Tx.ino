// the setup routine runs once when you press reset:
const int buttonPin1 = 10; 
  // the number of the pushbutton pin
//const int ledPin =  13;
int buttonState1=0;


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
 
}

// the loop routine runs over and over again forever:
void loop() 
{  
  buttonState1 = digitalRead(buttonPin1);
    // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if(buttonState1 == HIGH)
  { 
   lcd.clear();     
   int FSR1=10;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("FIRE DETECTED");
   delay(50);
  } 
  
  else
  {
    lcd.clear();     
   int FSR1=20;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("FIRE NOT DETECTED");
   delay(50);
  }
  
  }
