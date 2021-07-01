// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 180417

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 16
#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  randomSeed(analogRead(0));
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;
int i,l;

void clearLed(){
for(i = 0; i < 16;i++){
    strip.setPixelColor(i, 0, 0 , 0, 0);
}
  
}

int r=0,g=0,b=0,w=0;
void loop() {


for(i = 0; i < 16;i++){
    strip.setPixelColor(i, 0, 0, 0, 255);
    strip.show();
    delay(100);
    strip.setPixelColor(i, 0, 0, 255, 0);
    strip.show();
    delay(100);
    strip.setPixelColor(i, 255, 0, 0, 0);
    strip.show();
    delay(100);
    strip.setPixelColor(i, 0, 0 , 0, 0);
}
delay(wait);
r = r + 31;
g = g + 43;
b = b + 71;
w = w + 10;
 //add if condition
 if (r > 255) r = 0;
   
}
