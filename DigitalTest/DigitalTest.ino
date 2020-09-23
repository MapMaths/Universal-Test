/*
  AnalogTest.ino - A universal basic test for Digital and Serial.
  Create by MapMaths, September 23, 2020.
  Released into the public domain.
*/

const int outPin = 4;
int inPin = 2;
int value;
void setup()
{
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.println("Reading at pin 2, writing at pin 4. ");
  Serial.println("Serial input to change reading pin. ");
}
void loop()
{
  if (Serial.available() > 0)
  {
    inPin = Serial.read();
    Serial.println("Reading pin change to " + inPin);
  }
  value = digitalRead(inPin);
  Serial.println(value);
  digitalWrite(outPin, value);
}
