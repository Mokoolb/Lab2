/*Arduino PB pulldown
  The goal of this project is to have a pin read LOW when a button is unpressed and HIGH when it is pressed
 */
 
  int button_pin = 5; //the number to read the pushbutton pin
  int button_state; //to read the button's status
void setup() { // put your setup code here, to run once:

  
  pinMode(button_pin, INPUT); //setting pin 5 as an INPUT
  
  Serial.begin(9600); //starting serial monitor to use it
}

void loop() { // put your main code here, to run repeatedly:
  
  button_state = digitalRead(button_pin); //setting button state to the value given from pin 5
  
  Serial.println(button_state); //printing the value gotten from button_state in the serial monitor
}
