void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(300); //Frecuencia a la que se envian los pulsos. 
  digitalWrite(13, LOW);
  delay(300);
}
