int rdled = 11;   // red led
int gnled = 10;  //green led
int blled = 9;  // blue
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(rdled, OUTPUT);
  pinMode(gnled, OUTPUT);
  pinMode(blled, OUTPUT);
    Serial.begin(9600);

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
} 

void rgbled(int red, int green, int blue){
   analogWrite(rdled, red);   
  analogWrite(gnled, green);   
  analogWrite(blled, blue);   
 
}

int r[15] = {0,20,40,60,80,120,160,20,160,180,255,220,24,20,254};
int g[15] = {20,30, 130,80,135,2,180,10,200,3,69,160,15,98,44};
int b[15] = {4,9,16,25,36,49,64,81,100,121,144,169,196,225,125};
int i;
// the loop routine runs over and over again forever:
void loop()  { 
  for (i = 0; i < 15;i++){
    rgbled(r[i],g[i],b[i]);
    delay(100);
  }                  
}
