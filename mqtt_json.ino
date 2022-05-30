#include <ArduinoJson.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "DHT.h"

#define DHTPIN 15 // pino que estamos conectado
#define DHTTYPE DHT11 // DHT 11
#define uS_TO_S_FACTOR 1000000  /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  20        /* Time ESP32 will go to sleep (in seconds) */

RTC_DATA_ATTR int bootCount = 0;
DHT dht(DHTPIN, DHTTYPE);
 
const char* ssid = "MATEUS_2.4GHz";
const char* password =  "M@teus28";
const char* mqttServer = "mcsghost.duckdns.org";
const int mqttPort = 1883;
const char* mqttUser = "Mateus";
const char* mqttPassword = "Lorena25";
 
WiFiClient espClient1;
PubSubClient client(espClient1);

void print_wakeup_reason(){
  esp_sleep_wakeup_cause_t wakeup_reason;

  wakeup_reason = esp_sleep_get_wakeup_cause();

  switch(wakeup_reason)
  {
    case ESP_SLEEP_WAKEUP_EXT0 : Serial.println("Wakeup caused by external signal using RTC_IO"); break;
    case ESP_SLEEP_WAKEUP_EXT1 : Serial.println("Wakeup caused by external signal using RTC_CNTL"); break;
    case ESP_SLEEP_WAKEUP_TIMER : Serial.println("Wakeup caused by timer"); break;
    case ESP_SLEEP_WAKEUP_TOUCHPAD : Serial.println("Wakeup caused by touchpad"); break;
    case ESP_SLEEP_WAKEUP_ULP : Serial.println("Wakeup caused by ULP program"); break;
    default : Serial.printf("Wakeup was not caused by deep sleep: %d\n",wakeup_reason); break;
  }
}
 
void setup() {
 
  Serial.begin(115200);
  delay(1000);
  Serial.println("DHTxx test!");
  dht.begin();
  Serial.println();
  
  //Increment boot number and print it every reboot
  ++bootCount;
  Serial.println("Boot number: " + String(bootCount));

  //Print the wakeup reason for ESP32
  print_wakeup_reason();
 
 
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
 
  client.setServer(mqttServer, mqttPort);
 
  while (!client.connected()) {
    Serial.println("Connecting to MQTT...");
 
    if (client.connect("ESP32Client1", mqttUser, mqttPassword )) {
 
      Serial.println("connected");
 
    } else {
 
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
 
    }
  }
}
 
void loop() {
  float humidity = dht.readHumidity();
  float temperatury = dht.readTemperature();
  float soil_moisture = map(analogRead(33), 0, 4096, 0, 100);
  float pressure = map(analogRead(34), 0, 4096, 0, 16958.32);
  DynamicJsonDocument doc(4096);
  Serial.println(pressure);   
  Serial.println(soil_moisture);
 
  //doc["device"] = "Setor";
  doc["soil_moisture_1"] = soil_moisture*1.00;
  doc["pressure_1"] = pressure/1000.00;
  doc["humidity_1"] = humidity*1.00;
  doc["temperatury_1"] = temperatury*1.00;
  
  char JSONmessageBuffer[500];
  serializeJson(doc, JSONmessageBuffer);
  Serial.println("Sending message to MQTT topic..");
  Serial.println(JSONmessageBuffer);
 
  if (client.publish("Setor", JSONmessageBuffer) == true) {
    Serial.println("Success sending message");
  } else {
    Serial.println("Error sending message");
  }
  if (isnan(humidity) || isnan(temperatury)) 
  {
    Serial.println("Failed to read from DHT");
  } 
  else
  {
    Serial.print("Umidade: ");
    Serial.print(humidity);
    Serial.print(" %t");
    Serial.print("Temperatura: ");
    Serial.print(temperatury);
    Serial.println(" *C");
  }
 
  client.loop();
  Serial.println("-------------");
   /*
  First we configure the wake up source
  We set our ESP32 to wake up every 5 seconds
  */
  esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
  Serial.println("Setup ESP32 to sleep for every " + String(TIME_TO_SLEEP) +
  " Seconds");
  Serial.println("Going to sleep now");
  delay(1000);
  Serial.flush(); 
  esp_deep_sleep_start();
  Serial.println("This will never be printed");
 
}
