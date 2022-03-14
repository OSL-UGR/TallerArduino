int rojo_pin = 2;
int verde_pin = 4;
int azul_pin = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(rojo_pin, OUTPUT);
pinMode(verde_pin, OUTPUT);
pinMode(azul_pin, OUTPUT);
}

void RGB_color(int rojo_valor, int verde_valor, int azul_valor){
  
  analogWrite(rojo_pin,rojo_valor);
  analogWrite(verde_pin,verde_valor);
  analogWrite(azul_pin,azul_valor);
  
}
void loop() {
  RGB_color(255,0,0); //Rojo
  delay(500);
  RGB_color(0,255,0); //Verde
  delay(500);
  RGB_color(0,0,255); //Azul
  delay(500);
  RGB_color(255,255,0); //Amarillo
  delay(500);
}
