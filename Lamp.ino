#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "5JxE53KnwNincKaEqQwmHGSR8Hpd1M9f";
char ssid[] = "request timed out";
char pass[] = "ahyasatari21";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  delay(1000);
}

void loop()
{
  Blynk.run();
}
