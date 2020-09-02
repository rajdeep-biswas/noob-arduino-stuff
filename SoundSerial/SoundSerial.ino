const int MIC = 0; //the microphone amplifier output is connected to pin A0
int adc;
int dB, PdB; //the variable that will hold the value read from the microphone each time

void setup() {
Serial.begin(9600); //sets the baud rate at 9600 so we can check the values the microphone is obtaining on the Serial Monitor
  pinMode(3, OUTPUT);
}

void loop(){

  PdB = dB; //Store the previous of dB here
  
adc= analogRead(MIC); //Read the ADC value from amplifer 
//Serial.println (adc);//Print ADC for initial calculation 

Serial.println (adc);

delay(100);

}
