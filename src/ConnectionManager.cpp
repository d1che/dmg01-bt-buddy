#include "ConnectionManager.h"

ConnectionManager::ConnectionManager() {  }

void ConnectionManager::connect(char* ssid, char* pass) {
  m_ssid = ssid;
  m_pass = pass;

  WiFi.begin(m_ssid, m_pass);

  // Wait for connection
  while(WiFi.status() != WL_CONNECTED) {
    delay (10);
  }

  m_connected = true;
  m_ip = WiFi.localIP().toString();
}

void ConnectionManager::disconnect() {
  WiFi.disconnect();
}

String ConnectionManager::getIP() {
  return m_ip;
}

void ConnectionManager::setHostname(String name) {
  m_hostname = name;
  WiFi.hostname(m_hostname);
}