
int LED1 = 13; //pins 8-13 are to be LED outputs
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int SW1 = 2; //pins 2-4 are to be switch inputs
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
randomSeed(analogRead(0));
}

void loop() {

//SW1
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
//SW1,SW3
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
//SW2
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
//SW2,SW3
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
//SW1,SW2
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
//SW1,SW2,SW3
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
//SW3
  if (digitalRead(SW1) == LOW && digitalRead(SW2) == LOW && digitalRead(SW3) == HIGH){
    int LEDR = random(8, 14);
    digitalWrite(LEDR, HIGH);
    delay(50);
    digitalWrite(LEDR, LOW);
  }
//Default
  else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
}
