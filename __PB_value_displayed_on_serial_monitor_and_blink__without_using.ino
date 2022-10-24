/*PB value displayed on serial monitor and blink (without using Delay)
 The goal of this program is explained in the theme, where two programs are meshed together, the input pullup and the blink.
 This isnt possible with a normal delay therefore we have to use another method which includes using millis() program which is the amount of time
 that has passed from the start of the program
 */

const int ledPin =  4;// the number of the LED pin
int button_pin = 5; //the number to read the pushbutton pin
int button_state; //to read the button's status
int ledState = LOW;// ledState used to set the LED
unsigned long previousMillis = 0;  // will store last time LED was updated in a LONG variable
const long interval = 1000;   // interval at which to blink (milliseconds)

void setup() {
  pinMode(ledPin, OUTPUT); // set the digital pin as output
  pinMode(button_pin, INPUT_PULLUP); //setting pin 5 as an INPUT PULLUP
  Serial.begin(9600); //starting serial monitor to use it
}

void loop() {  // here is where thet code is running all the time.
    button_state = digitalRead(button_pin);//stores value from pin 5 into a variable
  Serial.println(button_state); //printing the value gotten from button_state in the serial 

  unsigned long currentMillis = millis();//putting the time from the start of the program into a long variable

  if (currentMillis - previousMillis >= interval) {// if the current time - the last time the time was recordered is greater then the interval that means another second has passed
    
    previousMillis = currentMillis; // saving the last time the LED blinked
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
