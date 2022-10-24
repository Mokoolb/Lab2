/*Potentiometer voltage displayed through 5 Led
  The goal of this project is to have the amount of volts recieved represented through 5 leds(1 LED = 1 VOLT)
 */ 
 
  int pot_pin = A0; //the number to read the potentiometer's pin
  float pot_volt_value; //to read the potientiometer's status
void setup() { // put your setup code here, to run once:
  pinMode(5,OUTPUT);//Setting pin for LED as output
  pinMode(6,OUTPUT);//Setting pin for LED as output
  pinMode(7,OUTPUT);//Setting pin for LED as output
  pinMode(8,OUTPUT);//Setting pin for LED as output
  pinMode(9,OUTPUT);//Setting pin for LED as output
  pinMode(pot_pin, INPUT); //setting pin A0 as an INPUT
  
}

void loop() { // put your main code here, to run repeatedly:
  digitalWrite(5,0);//stops sending electricity to 5 pin
  digitalWrite(6,0);//stops sending electricity to 6 pin
  digitalWrite(7,0);//stops sending electricity to 7 pin
  digitalWrite(8,0);//stops sending electricity to 8 pin
  digitalWrite(9,0);//stops sending electricity to 9 pin
  pot_volt_value = analogRead(pot_pin)/204.6;//stores value from pin A0 into a variable and converts to volts
  pot_volt_value = abs(pot_volt_value);//get's the absolut value of  pot_volt_value
  if(pot_volt_value => 1){//if the voltage is one or greater
  digitalWrite(5,1);//sends electricity to 5 pin

  }
    if(pot_volt_value >= 2){//if the voltage is 2 or greater
  digitalWrite(6,1);//sends electricity to 6 pin

  }
      if(pot_volt_value >= 3){//if the voltage is 3 or greater
  digitalWrite(7,1);//sends electricity to 7 pin

  }
      if(pot_volt_value >= 4){//if the voltage is 4 or greater
  digitalWrite(8,1);//sends electricity to 8 pin

  }
      if(pot_volt_value == 5){//if the voltage is 5
  digitalWrite(6,1);//sends electricity to 9 pin

  }
}
