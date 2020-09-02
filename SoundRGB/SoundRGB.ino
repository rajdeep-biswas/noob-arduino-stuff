const int MIC = 0; //the microphone amplifier output is connected to pin A0
int adc;
int dB, PdB; //the variable that will hold the value read from the microphone each time
int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int color = 0;
int red, blue, green;

void setup()
{
  Serial.begin(9600); //sets the baud rate at 9600 so we can check the values the microphone is obtaining on the Serial Monitor
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  int vol = analogRead(MIC);
  Serial.println(vol);
  if(vol > 600) {
    red = random(0, 255);
    blue = random(0, 255);
    green = random(0, 255);
  }
  analogWrite(redPin, red);
  analogWrite(greenPin, blue);
  analogWrite(bluePin, green); 
}
