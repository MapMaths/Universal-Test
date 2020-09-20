const int outPin = 3;
int inPin = 2;
int value;
void setup()
{
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.println("Reading at pin 2, writing at pin 3. ");
  Serial.println("Serial input to change reading pin. ");
}
void loop()
{
  if (Serial.available() > 0)
  {
    inPin = Serial.read();
    Serial.println("Reading pin change to " + inPin);
  }
  value = analogRead(inPin);
  Serial.println(value);
  analogWrite(outPin, value);
}
