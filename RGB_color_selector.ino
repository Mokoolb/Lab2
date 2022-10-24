/*RGB color selector
The main goal of the program is to be able choose any color available throught the RGB spectrum(0-255,0-255,0-255)*/

int red_light_pin= 11; //the number to output to the R pin on the RGB
int green_light_pin = 10; //the number to output to the G pin on the RGB
int blue_light_pin = 9; //the number to output to the B pin on the RGB
void setup() { //setup code in setup to run once
  pinMode(red_light_pin, OUTPUT); // (R)sets pin 11 as an output for one of the RGB wires
  pinMode(green_light_pin, OUTPUT); // (G)sets pin 10 as an output for one of the RGB wires
  pinMode(blue_light_pin, OUTPUT); // (B)sets pin 9 as an output for one of the RGB wires
}
void loop() {// main code in void loop to run repeatedly
  analogWrite(red_light_pin, 225); //red is on at full(255)
  analogWrite(green_light_pin, 0); //green is not on
  analogWrite(blue_light_pin, 0); //blue is not on
  //therefore the RGB will light up RED
}
