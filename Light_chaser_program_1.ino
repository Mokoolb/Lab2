/*Light chaser program 1
The main goal of the program is to turn on and off 4 LEDs consecutively one direction*/


int led_pin4 = 6; //sets up a int variable for pin 6

int led_pin3 = 5; //sets up a int variable for pin 5

int led_pin2 = 4; //sets up a int variable for pin 4

int led_pin1 = 3; //sets up a int variable for pin 3


void setup() { //setup code in setup to run once
  
  pinMode(led_pin1, OUTPUT); // sets the pin as an output(to light an led)
  
  pinMode(led_pin2, OUTPUT); // sets the pin as an output(to light an led)
  
  pinMode(led_pin3, OUTPUT); // sets the pin as an output(to light an led)
  
  pinMode(led_pin4, OUTPUT); // sets the pin as an output(to light an led)
}

void loop() { // main code in void loop to run repeatedly
  
  digitalWrite(led_pin1, 1); //sends electricity through pin 3
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(led_pin1, 0); //stops sending electricity through pin 3
  
  delay(1000); //stops program for 1 sec

  digitalWrite(led_pin2, 1); //sends electricity through pin 4
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(led_pin2, 0); //stops sending electricity through pin 4
  
  delay(1000); //stops program for 1 sec

  digitalWrite(led_pin3, 1); //sends electricity through pin 5
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(led_pin3, 0); //stops sending electricity through pin 5
  
  delay(1000); //stops program for 1 sec
    
  digitalWrite(led_pin4, 1); //sends electricity through pin 6
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(led_pin4, 0); //stops sending electricity through pin 6
  
  delay(1000); //stops program for 1 sec

}
