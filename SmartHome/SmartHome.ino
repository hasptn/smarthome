#define BLYNK_PRINT Serial

/* To get this FIRMWARE CONFIGURATION:
1. Go to search icon in the website Blynk IoT, then click it,
2. After that click the device name, then click "Device Info",
3. Copy all FIRMWARE CONFIGURATION, then paste it to below. */
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_DEVICE_NAME ""
#define BLYNK_AUTH_TOKEN ""

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <Servo.h>

Servo door;
Servo window;

char auth[] = BLYNK_AUTH_TOKEN;

/* Fill this two configuration with your WiFi name and password */
char ssid[] = "";
char pass[] = "";

BlynkTimer timer;

#define DHTPIN 5
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);

void sendSensor(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

    Blynk.virtualWrite(V0, t);
    Blynk.virtualWrite(V1, h);
    Serial.print("Temperature : ");
    Serial.print(t);
    Serial.print("   Humidity : ");
    Serial.println(h);
}

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
  dht.begin();
  timer.setInterval(100L, sendSensor);
  
  door.attach(2);
  window.attach(14);
  door.write(0);
  window.write(0);
}

void loop(){
  Blynk.run();
  timer.run();
}

BLYNK_WRITE(V2){
    int pinValue = param.asInt();
         if (pinValue == 1)
 {door.write(180);
    }
           else        
  door.write(0);
}

BLYNK_WRITE(V3){
    int pinValue = param.asInt();
         if (pinValue == 1)
 {window.write(180);
    }
           else      
  window.write(0);
}
