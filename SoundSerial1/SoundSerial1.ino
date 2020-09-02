int soundDetectedPin = 10; // Use Pin 10 as our Input
int soundDetectedVal;


void setup ()
{
  Serial.begin(9600);  
  pinMode (soundDetectedPin, INPUT) ; // input from the Sound Detection Module
}
void loop ()
{
  soundDetectedVal = analogRead(soundDetectedPin) ;
  delay(20);
  Serial.println(soundDetectedVal);
}
