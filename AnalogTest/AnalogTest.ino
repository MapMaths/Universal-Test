/*
  AnalogTest.ino - A universal basic test for Analog and Serial.
  Create by MapMaths, September 23, 2020.
  Released into the public domain.
*/

const int outPin = 3;

int inPin = A0;
int value;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.println("Reading at pin A0, writing at pin 3. ");
  Serial.println("Serial input to change reading pin. ");
}

void loop()
{
  if (Serial.available() > 0)
  {
    inPin = Serial.read();
    Serial.println("Reading pin change to " + inPin);
    pinMode(inPin, INPUT);
  }
  value = analogRead(inPin);
  Serial.println(value);
  analogWrite(outPin, value);
}
