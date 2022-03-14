int zumbador = 11;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  tone(zumbador, 500);
  delay(1000);

  noTone(zumbador);
  delay(500);

  tone(zumbador,530,400);
  delay(500);
}
