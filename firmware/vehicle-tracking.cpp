// vehicle tracking application

#include "application.h"
#include "libs/geolocator/src/google-maps-device-locator.h"

PRODUCT_ID(PLATFORM_ID);
PRODUCT_VERSION(3);
SYSTEM_MODE(AUTOMATIC);

GoogleMapsDeviceLocator locator;

void setup() {
  Serial.begin(9600);
  // Issue a Wi-Fi probe request and send the results to the cloud every 30 secs
  locator.withLocatePeriodic(30);
}

void loop() {
  locator.loop();
}
