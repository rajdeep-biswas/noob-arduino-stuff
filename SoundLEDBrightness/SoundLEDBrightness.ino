const int MIC = 0; //the microphone amplifier output is connected to pin A0
int adc;
int dB, PdB; //the variable that will hold the value read from the microphone each time
int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int vol = analogRead(MIC);

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  Serial.begin(9600); //sets the baud rate at 9600 so we can check the values the microphone is obtaining on the Serial Monitor
  pinMode(3, OUTPUT);
}

void loop() {
  int newVol = analogRead(MIC);
  Serial.println (newVol);

  if(newVol > 600) {
    analogWrite(led, 255);
    delay(30);
  }
  else {
    analogWrite(led, 0);
    delay(30);
  }
}
