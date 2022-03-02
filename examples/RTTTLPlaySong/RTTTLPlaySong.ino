#include <RTTTL.h>

const char *macgyver = "McGyver:d=4,o=4,b=160:8c5,8c5,8c5,8c5,2b,8f#,a,2g,8c5,c5,b,8a,8b,8a,g,e5,2a,b.,8p,8c5,8b,8a,c5,8b,8a,d5,8c5,8b,d5,8c5,8b,e5,8d5,8e5,f#5,b,1g5,8p,8g5,8e5,8c5,8f#5,8d5,8b,8e5,8c5,8a,8d5,8b,8g,c5,b,8c5,8b,8a,8g,a#,a,8g.";

RTTTL rtttl(GPIO2, channel);

void setup() {
  Serial.begin(115200);
  while(!Serial) { }
}

void loop() {
  if (!rtttl.isPlaying()) {
    rtttl.loadSong(macgyver, 5); // 2nd value is the volume.  Try values between ~5-30.
    delay(2000);
  } else {
    rtttl.play();
  }
}
