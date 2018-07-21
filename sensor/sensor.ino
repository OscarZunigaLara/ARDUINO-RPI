
const int LEDPin = 13;
const int PIRPin = 3;
const int INFR = 7;
const int LEDINFR = 12;
int INFRA;
void setup()
{
  pinMode(LEDPin , OUTPUT);
  pinMode(PIRPin , INPUT);
  pinMode(INFR , INPUT);
  pinMode(LEDINFR , OUTPUT);
  Serial.begin(9600);

}
 
void loop()
{
  if (digitalRead(PIRPin) == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
    //delay(100);
    digitalWrite(LEDPin, LOW);
    //delay(100);
  }
  else
  {
    digitalWrite(LEDPin, HIGH);
  }
  int INFRA = digitalRead(INFR); 
  if (INFRA == LOW){
    digitalWrite(LEDINFR , HIGH);
    delay(100);
  }
  else{
    digitalWrite(LEDINFR, LOW);
    delay(100);
  }
}
