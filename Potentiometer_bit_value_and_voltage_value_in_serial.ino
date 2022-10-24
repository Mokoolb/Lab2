/*Potentiometer_bit_value_and_voltage_value_in_serial
  The goal of this project is to read the bit value from a potientometer and also convert that value to volts to then print it in the serial monitor
 */
 
  int pot_pin = A0; //the number to read the potentiometer's pin
  float pot_value; //to read the potientiometer's status
void setup() { // put your setup code here, to run once:

  pinMode(pot_pin, INPUT); //setting pin A0 as an INPUT
  
  Serial.begin(9600); //starting serial monitor to use it
}

void loop() { // put your main code here, to run repeatedly:
  
  pot_value = analogRead(pot_pin);//stores value from pin A0 into a variable
  
  Serial.println(pot_value); //printing the value gotten from pot_pin in the serial monitor
  Serial.print(" bits  "); //printing the unit in the serial monitor
  Serial.println(pot_value/204.6); //printing the value gotten from pot_pin/204.6 to convert to volts(1023/5) in the serial monitor
  Serial.print(" volts  "); //printing the unit in the serial monitor
}
