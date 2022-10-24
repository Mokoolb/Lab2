/*Arduino controlling DC motor by a relay
The goal of this project is to control a relay through and arduino where the relay activates a motor that's in a seperate circuit(not attatched to pins)*/


int relayPin = 8;           //Assign Pin 8 to the relay control/signal pin

void setup() { // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);      //Setting the Relay pin as an Output Pin
}

void loop() {  // put your main code here, to run repeatedly:
  digitalWrite(relayPin, HIGH);        //Turn the relay ON for 1 second
  delay(1000);
  digitalWrite(relayPin,LOW);          //Turn the relay OFF for 1 second
  delay(1000);
}
