#ifndef __CONNECTION_MANAGER_H__
#define __CONNECTION_MANAGER_H__

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

class ConnectionManager {
  private:
    char* m_ssid;
    char* m_pass;
    String m_ip;
    String m_hostname;
    bool m_connected;
  public:
    ConnectionManager();
    
    void connect(char* ssid, char* pass);
    void disconnect();
    String getIP();
    void setHostname(String name);
};

#endif