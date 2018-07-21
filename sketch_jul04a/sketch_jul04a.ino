
const int ledPINAma1 = 13;
const int ledPINRojo1 = 12;
const int ledPINBlue1 = 11;
const int ledPINAma2 = 10;
const int ledPINRojo2 = 9;
const int ledPINBlue2 = 8;

const int BOTON = 7;
const int LEDBOTON = 6;

 
void setup() {
  Serial.begin(9600);    //iniciar puerto serie
  pinMode(ledPINAma1 , OUTPUT);  //definir pin como salida
  pinMode(ledPINRojo1 , OUTPUT);
  pinMode(ledPINBlue1 , OUTPUT);
  pinMode(ledPINAma2 , OUTPUT);
  pinMode(ledPINRojo2 , OUTPUT);
  pinMode(ledPINBlue2 , OUTPUT);
  pinMode(BOTON, INPUT);
}
 
void loop(){    
  digitalWrite(ledPINAma1 , HIGH);   //ama1
  delay(100);                
  digitalWrite(ledPINRojo1 , HIGH);  //rojo1
  delay(100);
  digitalWrite(ledPINAma1 , LOW);    //ama1
  delay(100);                  
  digitalWrite(ledPINRojo1 , LOW);   //rojo1
  delay(100);
  digitalWrite(ledPINBlue1 , HIGH);
  delay(100);
  digitalWrite(ledPINBlue1 ,LOW);
  delay(100);
  digitalWrite(ledPINAma2 , HIGH);   //ama1
  delay(100);                
  digitalWrite(ledPINRojo2 , HIGH);  //rojo1
  delay(100);
  digitalWrite(ledPINAma2 , LOW);    //ama1
  delay(100);                  
  digitalWrite(ledPINRojo2 , LOW);   //rojo1
  delay(100);
  digitalWrite(ledPINBlue2 , HIGH);
  delay(100);
  digitalWrite(ledPINBlue2 ,LOW);
  delay(100);

  if (digitalRead(BOTON)){
    digitalWrite(LEDBOTON, HIGH);
  }
  //else{
   // digitalWrite(LEDBOTON, LOW);
 // }
  
      
}
