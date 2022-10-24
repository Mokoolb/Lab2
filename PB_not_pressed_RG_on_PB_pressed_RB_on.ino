/*PB not pressed RG on PB pressed RB on
The main goal of the program is to have RG on from the RGB when the button is not presssed, When pressed, RB*/

  int button_pin = 6; //the number to read the pushbutton pin
  int button_state; //to read the button's status
void setup() { //setup code in setup to run once
  pinMode(button_pin, INPUT_PULLUP); //setting pin 6 as an INPUT PULLUP
  
  pinMode(3, OUTPUT); // (G)sets pin 3 as an output for one of the RGB wires
  
  pinMode(4, OUTPUT); // (R)sets pin 4 as an output for one of the RGB wires
  
  pinMode(5, OUTPUT); // (B)sets pin 5 as an output for one of the RGB wires
}

void loop() { // main code in void loop to run repeatedly
  
  button_state = digitalRead(button_pin); //setting button state to the value given from pin 6
  digitalWrite(3, 0); //stops sending current through pin 3
  digitalWrite(4, 0); //stops sending current through pin 4
  digitalWrite(5, 0); //stops sending current through pin 5
  if(button_state == HIGH){// if button is not pressed it will turn on RG where HIGH is not pressed because it is an INPUT PULLUP
  digitalWrite(3, 1); //sends current through pin 3
  digitalWrite(4, 1); //sends current through pin 4
  }
  else{// if it is pressed therefore not HIGH it will turn on only RB
  digitalWrite(4, 1); //sends current through pin 4
  digitalWrite(5, 1); //sends current through pin 5
  }
  

}
