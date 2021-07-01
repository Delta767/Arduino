//Steven's code
int led = 11;           // the pin that the LED is attached to
int led2 = 10;
int led3 = 9;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int dl = 25;

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led,brightness);
    delay(dl);
    }
   brightness = 0;
   analogWrite(led,brightness);
   while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led2,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led2,brightness);
    delay(dl);
    }
   brightness = 0;
   analogWrite(led2,brightness);
   while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led3,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led3,brightness);
    delay(dl);
    }
   brightness = 0    ;   
   analogWrite(led3,brightness);


while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led,brightness);
    analogWrite(led2,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led,brightness);
    analogWrite(led2,brightness);
    delay(dl);
    }
   brightness = 0    ;   
   analogWrite(led,brightness);
   analogWrite(led2,brightness);

   while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led,brightness);
    analogWrite(led3,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led,brightness);
    analogWrite(led3,brightness);
    delay(dl);
    }
   brightness = 0    ;   
   analogWrite(led,brightness);
   analogWrite(led3,brightness);

   while(brightness <= 255){
    brightness = brightness+fadeAmount;
    analogWrite(led3,brightness);
    analogWrite(led2,brightness);
    delay(dl);
    }
    while(brightness >= 0){
    brightness = brightness-fadeAmount;
    analogWrite(led3,brightness);
    analogWrite(led2,brightness);
    delay(dl);
    }
   brightness = 0    ;   
   analogWrite(led3,brightness);
   analogWrite(led2,brightness);
}
