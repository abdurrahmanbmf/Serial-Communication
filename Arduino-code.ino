int incomingByte = 0;   // for incoming serial data
int led = 13;
void setup()
{
  Serial.begin(9600); // // opens serial port, sets data rate to 9600 bps
 
  pinMode(led, OUTPUT);
}
 
void loop()
{ digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
 
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();//not using this
   
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
  }
}
