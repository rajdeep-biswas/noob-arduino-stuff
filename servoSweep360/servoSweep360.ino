#include <Servo.h>
Servo myservo;

int soundSensor = A0;

void setup() {
  pinMode(soundSensor,INPUT);
  Serial.begin (9600);
  myservo.attach(9);
}

void loop() {
  for(int i = 0; i < 181; i += 2) {
    myservo.write(i);
    delay(10);
  }
} 

void no() {
  myservo.write(85);
  int posA = analogRead(soundSensor);
  Serial.print(posA); 
  delay(500);
  myservo.write(0);              
  int posB = analogRead(soundSensor);
  delay(500);
  myservo.write(178);
  int posC = analogRead(soundSensor);
  delay(500);

  Serial.println(posA);

  if(posA > posB && posA > posC)
    Serial.println("front");
  else if(posB > posA && posB > posC)
    Serial.println("left");
  else if(posC > posA && posC > posB)
    Serial.println("right");
  else
    Serial.println("straight");
}
