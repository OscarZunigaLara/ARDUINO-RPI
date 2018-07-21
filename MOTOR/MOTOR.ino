

const int MOTOR = 12;
const int MOTOR2 = 11;
const int MOTOR3 = 10;
const int LED1 = 9;


const int MOTOR4 = 7;
const int MOTOR5 = 6;
const int MOTOR6 = 5;
const int LED2 = 4;

const int SENSOR = 2;


int MOVER = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR , OUTPUT);
  pinMode(MOTOR2 , OUTPUT);
  pinMode(MOTOR3 , OUTPUT);
  pinMode(LED1 , OUTPUT);
  
  pinMode(MOTOR4 , OUTPUT);
  pinMode(MOTOR5 , OUTPUT);
  pinMode(MOTOR6 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  
  pinMode(SENSOR , INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  MOVER = not MOVER;
  //Serial.print(MOVER);
  
  Serial.println(digitalRead(SENSOR));
  if (MOVER){
    digitalWrite(MOTOR , HIGH);
    digitalWrite(MOTOR2 , HIGH);
    digitalWrite(MOTOR3 , HIGH);
    digitalWrite(LED1 , HIGH);
    
    digitalWrite(MOTOR6 , LOW);
    digitalWrite(MOTOR5 , LOW);
    digitalWrite(MOTOR4 , LOW);
    digitalWrite(LED2 , LOW);
    
    delay(5000);
    }
  else{
    digitalWrite(MOTOR6 , HIGH);
    digitalWrite(MOTOR5 , HIGH);
    digitalWrite(MOTOR4 , HIGH);
    digitalWrite(LED2 , HIGH);
    
    digitalWrite(MOTOR , LOW);
    digitalWrite(MOTOR2 , LOW);
    digitalWrite(MOTOR3 , LOW);
    digitalWrite(LED1 , LOW);
    
    delay(5000);
  }

}
