const int LED = 13;
const int SENSOR = 7;
const int PRUEBA= 3;


int val = 0;     // variable para almacenar el valor leido

void setup()
{
  Serial.begin(9600);
  pinMode(LED , OUTPUT);      // configura el pin digital 13como salida
  pinMode(SENSOR , INPUT);
  pinMode(PRUEBA , OUTPUT);
  
}

void loop()
{
  digitalWrite(PRUEBA , HIGH);
  digitalRead(SENSOR);
  Serial.println(digitalRead(SENSOR));
  delay(200);
  digitalWrite(LED , HIGH);    // configura el pin del LED al mismo valor que el pulsador
}
