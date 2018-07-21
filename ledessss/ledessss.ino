const int LEDE = 13;
const int SENS = 9;


void setup() {
  // put your setup code here, to run once:
pinMode(LEDE , OUTPUT);
pinMode(SENS , INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int SENSOR = digitalRead(7);
  if (SENSOR == HIGH){
    
    digitalWrite(LEDE , HIGH);
    delay(100);
    digitalWrite(LEDE , LOW);
    
  }else{
      digitalWrite(LEDE , LOW);
  }
}
