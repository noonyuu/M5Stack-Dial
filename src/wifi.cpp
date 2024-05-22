#include <IPAddress.h>
#include <WiFi.h>

const IPAddress myAPIP(192, 168, 0, 1);
const IPAddress subnet(255, 255, 255, 0);
String AP_ssid = "DialPlay";
String AP_pass = "DialPlay";

void startWiFiAP()
{
  WiFi.softAP(AP_ssid.c_str(), AP_pass.c_str());
  WiFi.softAPConfig(myAPIP, myAPIP, subnet);
}