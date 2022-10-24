  /*Potentiometer change color of RGB
  The goal of this project is to have the potentiometer change the RGB color from white to black and what's in between
 */ 

  int red_light_pin= 11; //the number to output to the R pin on the RGB 
  int green_light_pin = 10; //the number to output to the G pin on the RGB
  int blue_light_pin = 9; //the number to output to the B pin on the RGB
  int pot_pin = A0; //the number to read the potentiometer's pin
  float pot_8bit_value; //to read the potientiometer's status
void setup() { //setup code in setup to run once
  pinMode(red_light_pin, OUTPUT); // (R)sets pin 11 as an output for one of the RGB wires
  pinMode(green_light_pin, OUTPUT); // (G)sets pin 10 as an output for one of the RGB wires
  pinMode(blue_light_pin, OUTPUT); // (B)sets pin 9 as an output for one of the RGB wires
}
void loop() {// main code in void loop to run repeatedly  
  pot_8bit_value = analogRead(pot_pin)/4;//stores value from pin A0 into a variable and converts to 8 bit (2^10/2^2)
  analogWrite(red_light_pin, pot_8bit_value); //red is the value of pot_8bit_value
  analogWrite(green_light_pin, pot_8bit_value); //green is the value of pot_8bit_value
  analogWrite(blue_light_pin, pot_8bit_value); //blue is the value of pot_8bit_value
}
