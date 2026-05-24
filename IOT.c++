#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>

#define TRIG_PIN 5
#define ECHO_PIN 18

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "f64abd18f054459c90566f33281430b0.s1.eu.hivemq.cloud";
const int mqtt_port = 8883;
const char* mqtt_user = "CPqueijo";
const char* mqtt_pass = "1234567@qA";

WiFiClientSecure espClient;
PubSubClient client(espClient);

void setup_wifi() {
  Serial.println("Conectando ao WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi conectado!");
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Conectando ao MQTT...");

    String clientId = "ESP32-" + String(random(10000));

    if (client.connect(clientId.c_str(), mqtt_user, mqtt_pass)) {
      Serial.println("Conectado!");
    } else {
      Serial.print("Erro: ");
      Serial.println(client.state());
      delay(3000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  espClient.setInsecure();
  client.setServer(mqtt_server, mqtt_port);
   Serial.begin(115200);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

float lerDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH);
  float distancia = duracao * 0.034 / 2;

  return distancia;
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  float distancia = lerDistancia();

  // Converter para string
  char distStr[10];

  dtostrf(distancia, 1, 2, distStr);

  client.publish("maquina1/distancia", distStr);

  Serial.print("Distancia: ");
  Serial.print(distStr);
  Serial.print(" cm");
  Serial.print(" ");


  delay(2000);
}