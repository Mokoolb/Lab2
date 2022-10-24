/*Light chaser program 2
The main goal of the program is to turn on and off 4 LEDs consecutively back and forth(ex: 1,2,3,4,3,2,1)*/


int current_pin_number = 3; //creating a variable to change pins within the program

String direction = "forwards"; //creating a variable for changing the direction of the light chaser

void setup() { //setup code in setup to run once
  
  pinMode(3, OUTPUT); // sets pin 3 as an output(to light an led)
 
  pinMode(4, OUTPUT); // sets pin 4 as an output(to light an led)
  
  pinMode(5, OUTPUT); // sets pin 5 as an output(to light an led)
  
  pinMode(6, OUTPUT); // sets pin 6 as an output(to light an led)
}

void loop() { // main code in void loop to run repeatedly
  
  
  digitalWrite(current_pin_number, 1); //sends electricity through pin current_pin_number
  
  delay(1000); //stops program for 1 sec
  
  digitalWrite(current_pin_number, 0); //stops sending electricity through pin current_pin_number
  
  delay(1000); //stops program for 1 sec
  
  if(current_pin_number == 6){ //checks if current_pin_number is 6: it has reached the last LED
  
    direction = "backwards"; //changes the direction to backwards
  
    current_pin_number = 5; //changing current_pin_number backwards 1
  }
  
  else if(current_pin_number == 3){ //if the pin isnt 6 it checks if current_pin_number is 3: it has reached the first LED
  
    direction = "forwards"; //changes the direction to forwards
   
    current_pin_number = 4; //changing current_pin_number forwards 1
  }
  else{
 
    if(direction == "forwards"){ //checks if direction is forward
  
      current_pin_number +=1 //changes current_pin_number forwards 1 
    }
  
    else{ //if direction isn't forward, its backwards
  
      current_pin_number -= 1; //changes current_pin_number backwards 1
    }
  }
  
}
