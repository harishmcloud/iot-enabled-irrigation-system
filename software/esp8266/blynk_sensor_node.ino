#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Advanced Irrigation System"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// ------------------- Credentials -------------------
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// ------------------- Pin Definitions -------------------
#define DHTPIN D4
#define DHTTYPE DHT22
#define ONE_WIRE_BUS D2
#define SOIL_SENSOR A0

// ------------------- Sensor Objects -------------------
DHT dht(DHTPIN, DHTTYPE);
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature ds18b20(&oneWire);

BlynkTimer timer;

// ------------------------------------------------------

void sendSensorData()
{
  // DHT22 Read
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (!isnan(humidity) && !isnan(temperature)) {
    Blynk.virtualWrite(V5, humidity);
    Blynk.virtualWrite(V6, temperature);
  }

  // DS18B20 Read
  ds18b20.requestTemperatures();
  float waterTemp = ds18b20.getTempCByIndex(0);
  Blynk.virtualWrite(V1, waterTemp);

  // Soil Moisture Read
  int soilRaw = analogRead(SOIL_SENSOR);
  float soilPercent = 100.0 - ((soilRaw / 1023.0) * 100.0);
  Blynk.virtualWrite(V2, soilPercent);

  Serial.print("Humidity: ");
  Serial.println(humidity);
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Water Temp: ");
  Serial.println(waterTemp);
  Serial.print("Soil Moisture: ");
  Serial.print(soilPercent);
  Serial.println("%");
}

// ------------------------------------------------------

void setup()
{
  Serial.begin(115200);

  dht.begin();
  ds18b20.begin();

  Blynk.begin(auth, ssid, pass);

  timer.setInterval(2000L, sendSensorData); // Every 2 seconds
}

// ------------------------------------------------------

void loop()
{
  Blynk.run();
  timer.run();
}