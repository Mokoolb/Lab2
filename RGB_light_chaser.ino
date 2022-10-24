/*RGB light chaser
The main goal of the program is to change the (3)colors of the RGB back and forth*/


void setup() { //setup code in setup to run once
  
  pinMode(3, OUTPUT); // sets pin 3 as an output for one of the RGB wires
  
  pinMode(4, OUTPUT); // sets pin 4 as an output for one of the RGB wires
  
  pinMode(5, OUTPUT); // sets pin 5 as an output for one of the RGB wires
}

void loop() { // main code in void loop to run repeatedly
  
  
  digitalWrite(3, 1); //sends electricity through pin 3
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(3, 0); //stops sending electricity through pin 3
  
  delay(1000); //stops program for 1 sec

  digitalWrite(4, 1); //sends electricity through pin 4
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(4, 0); //stops sending electricity through pin 4
  
  delay(1000); //stops program for 1 sec

  digitalWrite(5, 1); //sends electricity through pin 5
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(5, 0); //stops sending electricity through pin 5
  
  delay(1000); //stops program for 1 sec
  

}
