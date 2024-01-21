int Light = 12 ; //HERO board pin 12

void setup() {
  // initialize a digital pin as an output, then set it's value to HIGH (5 volts)
 pinMode(Light, OUTPUT);
 digitalWrite(Light, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Light, LOW);
  delay(2000);
  digitalWrite(Light, HIGH);
  delay(100);
}
