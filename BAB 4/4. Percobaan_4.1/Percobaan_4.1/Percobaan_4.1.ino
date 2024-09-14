#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char* ssid = "VEENDY";
const char* password = "akupadamu";
ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println();
  Serial.print("Configuring accesspoint...");
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

void handleRoot() {
  server.send(200, "text/html", "<h1>You are connected</h1>");
}
