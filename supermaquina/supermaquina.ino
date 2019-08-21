/**
 * sequencial de Leds (efeito supermaquina)
 * @author - Jhonata Reis
*/

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(20);
  digitalWrite(13, LOW);
  delay(20);
  digitalWrite(12, HIGH);
  delay(30);
  digitalWrite(12, LOW);
  delay(30);
  digitalWrite(11, HIGH);
  delay(40);
  digitalWrite(11, LOW);
  delay(40);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(11, HIGH);
  delay(40);
  digitalWrite(11, LOW);
  delay(40);
  digitalWrite(12, HIGH);
  delay(30);
  digitalWrite(12, LOW);
  delay(30);
  digitalWrite(13, HIGH);
  delay(20);
  digitalWrite(13, LOW);
  delay(20);
  
}
