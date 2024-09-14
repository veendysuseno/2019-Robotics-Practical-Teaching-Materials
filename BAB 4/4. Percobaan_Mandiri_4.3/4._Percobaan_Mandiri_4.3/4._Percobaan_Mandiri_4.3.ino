#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Servo.h>

const char* ssid = "UGMURO-1";
const char* password = "ayamgepuk";
int x = 90;

ESP8266WebServer server(80);
String webPage = "";
Servo myservo;

void setup() {
  webPage += "<h1><center>WebCam Servo</center></h1>";
  webPage += "<center><p><a href='\kiri\'><button>Kiri</button></a>";
  webPage += "<a href='\kanan\'><button>Kanan</button></a></center>";
  myservo.attach(D2);
  myservo.write(x);
  delay(200);

  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266", WiFi.localIP()))
  {
    Serial.println("MDNS responder started");
  }
  server.on("/", []() {
    server.send(200, "text/html", webPage);
  });
  server.on("/kiri", []() {
    server.send(200, "text/html", webPage);
    kiri();
    Serial.println(x);
  });
  server.on("/kanan", []() {
    server.send(200, "text/html", webPage);
    kanan();
    Serial.println(x);
  });
  server.begin();
  Serial.println("HTTP server started");
  Serial.println(x);
}

void loop() {
  server.handleClient();
}

void kiri() {
  if (x == 180) {
    x = x;
    webPage += "<h2><center>Mentok Bos</center></h2>";
  } else {
    x = x + 30;
    refreshpage();
  }
  myservo.write(x);
  delay(500);
}
void kanan() {
  if (x == 0) {
    x = x;
    webPage += "<h2><center>Mentok Bos</center></h2>";
  } else {
    x = x - 30;
    refreshpage();
  }
  myservo.write(x);
  delay(500);
}

void refreshpage() {
  webPage = "";
  webPage += "<h1><center>WebCam Servo</center></h1>";
  webPage += "<center><p><a href='\kiri\'><button>Kiri</button></a>";
  webPage += "<a href='\kanan\'><button>Kanan</button></a></center>";
}
