#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
 Serial.begin(9600);
  dht.begin();
}

void loop() {
 
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  float t = dht.readTemperature();

  Serial.print("\n Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("\n Temperatura: ");
  Serial.print(t);

  delay (5000);
}
