/*Arduino PB input pullup
  The goal of this project is to have a pin read LOW when a button is pressed and HIGH when it is not pressed
 */
 
  int button_pin = 5; //the number to read the pushbutton pin
  int button_state; //to read the button's status
void setup() { // put your setup code here, to run once:

  pinMode(button_pin, INPUT_PULLUP); //setting pin 5 as an INPUT PULLUP
  
  Serial.begin(9600); //starting serial monitor to use it
}

void loop() { // put your main code here, to run repeatedly:
  
  button_state = digitalRead(button_pin);//stores value from pin 5 into a variable
  
  Serial.println(button_state); //printing the value gotten from button_state in the serial monitor
}
