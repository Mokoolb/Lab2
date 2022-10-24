/*The Arduino blink program
The main goal of the program is to turn on and off an LED*/


int led_pin = 6; //sets up a int variable for pin 6


void setup() { //setup code in setup to run once
  
  pinMode(led_pin, OUTPUT); // sets the led_pin as an output(to light the led)
}

void loop() { // main code in void loop to run repeatedly
  
  digitalWrite(led_pin, 1); //sends electricity through pin 6
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(led_pin, 0); //stops sending electricity through pin 6
  
  delay(1000); //stops program for 1 sec


}
