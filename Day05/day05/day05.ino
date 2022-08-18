 //pins 8-13 are LED outputs
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
//pins 2-4 are switch inputs
int SW1 = 2;
int SW2 = 3;
int SW3 = 4;

void setup() {
//setup input and output pins
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);
pinMode(SW1, INPUT);
pinMode(SW2, INPUT);
pinMode(SW3, INPUT);
//setup random seed https://www.arduino.cc/reference/en/language/functions/random-numbers/random/
randomSeed(analogRead(0));
}

void loop() {

//SW1 - single rotating clockwise
  if (digitalRead(SW1) == HIGH && digitalRead(SW2) == LOW && digitalRead(SW3) == LOW){
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED6, LOW);
  }
//SW1, SW3 single rotating counter-clockwise
  if (digitalRead(SW1) == HIGH && digitalRead(SW2) == LOW && digitalRead(SW3) == HIGH){
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED6, LOW);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED5, LOW);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED4, LOW);
    digitalWrite(LED3, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
  }
//SW2 double rotating clockwise
  if (digitalRead(SW1) == LOW && digitalRead(SW2) == HIGH && digitalRead(SW3) == LOW){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    digitalWrite(LED6, LOW);
  }
//SW2,SW3 double rotating counter-clockwise
  if (digitalRead(SW1) == LOW && digitalRead(SW2) == HIGH && digitalRead(SW3) == HIGH){
    digitalWrite(LED3, HIGH);
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED3, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED4, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED4, LOW);
  }
//SW1,SW2 triple rotating
  if (digitalRead(SW1) == HIGH && digitalRead(SW2) == HIGH && digitalRead(SW3) == LOW){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED5, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED6, LOW);
  }
//SW1,SW2,SW3 single off rotating clockwise
  if (digitalRead(SW1) == HIGH && digitalRead(SW2) == HIGH && digitalRead(SW3) == HIGH){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
    delay(100);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    delay(100);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    delay(100);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, LOW);
    delay(100);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, LOW);
    delay(100);
    digitalWrite(LED6, HIGH);
  }
//SW3 random madness
  if (digitalRead(SW1) == LOW && digitalRead(SW2) == LOW && digitalRead(SW3) == HIGH){
    int LEDR = random(8, 14);
    digitalWrite(LEDR, HIGH);
    delay(50);
    digitalWrite(LEDR, LOW);
  }
//Default nada
  else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
}
