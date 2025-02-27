int motorPin_1A=2;
int motorPin_1B=3;
int motorPin_2A=4;
int motorPin_2B=5;
#define trigPin 11
#define buzzer 5  
#define echoPin 12

float new_delay; 


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(motorPin_1A, OUTPUT);
  pinMode(motorPin_1B, OUTPUT);
  pinMode(motorPin_2A, OUTPUT);
  pinMode(motorPin_2B, OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int sensorValue_1 = analogRead(A1);
  int sensorValue_2 = analogRead(A2);
  
  // print out the value you read:
  Serial.println(sensorValue);
  Serial.println(sensorValue_1);
  Serial.println(sensorValue_2);
  if (sensorValue>100)
  digitalWrite(motorPin_1A,HIGH);
  else
      digitalWrite(motorPin_1A,LOW);
  if(sensorValue_1>100)
  digitalWrite(motorPin_1B,HIGH);
  else
    digitalWrite(motorPin_1B,LOW);
  if (sensorValue_2>100){
  digitalWrite(motorPin_2A,HIGH);
  digitalWrite(motorPin_2B,HIGH);}
  else{
    digitalWrite(motorPin_2A,LOW);
    digitalWrite(motorPin_2B,LOW);
  }
   long duration, distance;
  digitalWrite(trigPin, LOW);        
  delayMicroseconds(2);              
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);           
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  new_delay= (distance *3) +30;
  Serial.print(distance);
  Serial.println("  cm");
  if (distance < 15)
  {
   digitalWrite(buzzer,HIGH);
   delay(new_delay);
   digitalWrite(buzzer,LOW);
 
  }
  else
  {
    digitalWrite(buzzer,LOW);

  }
  delay(200);  // delay in between reads for stability
}
