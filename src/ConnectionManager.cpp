#include "ConnectionManager.h"

ConnectionManager::ConnectionManager() {}

void ConnectionManager::connect(const char* ssid, const char* pass) {
  _ssid = ssid;
  _pass = pass;

  WiFi.begin(_ssid, _pass);

  // Wait for connection
  while(WiFi.status() != WL_CONNECTED) {
    delay (10);
  }

  _connected = true;
  _ip = WiFi.localIP().toString();
}

void ConnectionManager::disconnect() {
  WiFi.disconnect();
}

String ConnectionManager::getIP() {
  return _ip;
}

void ConnectionManager::setHostname(String name) {
  _hostname = name;
  WiFi.hostname(_hostname);
}