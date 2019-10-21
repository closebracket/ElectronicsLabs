/*
  Modified Blink Example, by Closebracket
*/
// Pin for Output. Declare the int and initialise it in order to get output from the digital outputs on the arduino.
int OutputPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(OutputPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(OutputPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(OutputPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
