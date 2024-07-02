
void setup()
{
  Serial.begin(921600); //Set serial communication baud rate
}
void loop()
{
  static unsigned long i = 0; //define variable i
  Serial.println(i++); //output i after adding one
  delay(1000); // delay 1 second
}

