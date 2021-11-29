/*
  AnalogTest.ino - A universal basic test for Analog and Serial.
  Create by MapMaths, September 23, 2020.
  Released into the public domain.
*/

const int LDR = A0;

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  while(!Serial);
  Serial.println("Reading at pin A0.");
}

void loop() {
  Serial.println(analogRead(LDR));
  delay(10);
}
