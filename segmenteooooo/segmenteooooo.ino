
#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object
int numero = 0;
int numeroN = 0;
const int BOTON = 1;

void setup() {
  // put your setup code here, to run once:
  byte numDigits = 4;
  byte digitPins[] = {10 , 11 , 12 , 13};
  byte segmentPins[] = {2 ,3 , 4 , 5 , 6 , 7 , 8 , 9};
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins); 
  // If your display is common anode type, please edit comment above line and uncomment below line  
  // sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
  sevseg.setBrightness(90);
  Serial.begin(57600);
  pinMode(BOTON , INPUT);
}

void loop() {
  int BOTON = digitalRead(0);
  if (Serial.available() > 0){
         numero = Serial.read();
         Serial.write(numero);
  }
  if (BOTON == 0){
    numero = numero + 1;
    Serial.println(numero);
    delay(30);  
    }
  Serial.println(digitalRead(BOTON));

  sevseg.setNumber(numero  , 0);
  sevseg.refreshDisplay(); // Must run repeatedly
  // put your main code here, to run repeatedly:
  

}
