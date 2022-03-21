#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int rojo_pin = 4;
int verde_pin = 7;
int azul_pin = 2;
int zumbador = 11;
LiquidCrystal_I2C lcd(0x27,16,2);
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  pinMode(rojo_pin, OUTPUT);
  pinMode(verde_pin, OUTPUT);
  pinMode(azul_pin, OUTPUT);
  Serial.begin(9600);
  dht.begin();
  lcd.begin();
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print("Humedad:");
  lcd.setCursor(0,1);
  lcd.print("Temperatura:");  
}

void RGB_color(int rojo_valor, int verde_valor, int azul_valor){
  analogWrite(rojo_pin,rojo_valor);
  analogWrite(verde_pin,verde_valor);
  analogWrite(azul_pin,azul_valor);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
 
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t = dht.readTemperature();

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  
  lcd.setCursor(9,0);
  lcd.print(h);

  lcd.setCursor(11,1);
  lcd.print(t);

  if(h>50.00 ){
    RGB_color(255,0,0); //rojo
    //tone(zumbador, 500);
    //delay(500);
  }else{
    RGB_color(0,255,0);
    }
}
