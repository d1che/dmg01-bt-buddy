#ifndef __CONNECTION_MANAGER_H__
#define __CONNECTION_MANAGER_H__

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

class ConnectionManager {
  private:
    const char* _ssid;
    const char* _pass;
    String _ip;
    String _hostname;
    bool _connected;
  public:
    ConnectionManager();
    
    void connect(const char* ssid, const char* pass);
    void disconnect();
    String getIP();
    void setHostname(String name);
};

#endif