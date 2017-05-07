// based off of NeoPixel Button Cycler Example

#include <Adafruit_NeoPixel.h>

#define BUTTON_PIN_13  2 // Jar 13 
#define BUTTON_PIN_12  3 // Jar 12
#define BUTTON_PIN_8   4 // Jar 8
#define BUTTON_PIN_14  5 // Jar 14
#define BUTTON_PIN_1   6 // Jar 1
#define BUTTON_PIN_15  7 // Jar 15
#define BUTTON_PIN_10  8 // Jar 10
#define BUTTON_PIN_16  9 // Jar 16 
#define BUTTON_PIN_3   10 // Jar 3
#define BUTTON_PIN_2   11 // Jar 2
#define BUTTON_PIN_9   12 // Jar 9
#define BUTTON_PIN_4   13 // Jar 4
#define BUTTON_PIN_5   31 // Jar 5
#define BUTTON_PIN_7   33 // Jar 7
#define BUTTON_PIN_11  35 // Jar 11
#define BUTTON_PIN_6   37 // Jar 6

int buttons[] = {BUTTON_PIN_1, BUTTON_PIN_2, BUTTON_PIN_3, BUTTON_PIN_5, BUTTON_PIN_6, BUTTON_PIN_8, BUTTON_PIN_9, BUTTON_PIN_10, BUTTON_PIN_11, BUTTON_PIN_12, BUTTON_PIN_14, BUTTON_PIN_15};
  
#define PIXEL_PIN    50    // Digital IO pin connected to the NeoPixels.
#define PIXEL_COUNT 16

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool oldState = HIGH;
int showType = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttons[0], INPUT_PULLUP);
  pinMode(buttons[1], INPUT_PULLUP);
  pinMode(buttons[2], INPUT_PULLUP);
  pinMode(buttons[3], INPUT_PULLUP);
  pinMode(buttons[4], INPUT_PULLUP);
  pinMode(buttons[5], INPUT_PULLUP);
  pinMode(buttons[6], INPUT_PULLUP);
  pinMode(buttons[7], INPUT_PULLUP);
  pinMode(buttons[8], INPUT_PULLUP);
  pinMode(buttons[9], INPUT_PULLUP);
  pinMode(buttons[10], INPUT_PULLUP);
  pinMode(buttons[11], INPUT_PULLUP);
  pinMode(buttons[12], INPUT_PULLUP);
  pinMode(buttons[13], INPUT_PULLUP);
  pinMode(buttons[14], INPUT_PULLUP);
  pinMode(buttons[15], INPUT_PULLUP); 
  // 3  button 4   Jar 4
  // 6  button 7   Jar 1
  // 12 button 13  Jar 13
  // 15 button 16  Jar 16 
  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  for(int i = 0; i < 11; i++){
    bool newState = digitalRead(buttons[i]);
    if (newState == LOW && oldState == HIGH) {
      delay(20);
      // Check if button is still low after debounce.
      newState = digitalRead(buttons[i]);
      if (newState == LOW) {
        showType++;
        if (showType > 11)
          showType=0;
        startShow(showType);
      }
    }
    oldState = newState;
   }
}

void startShow(int i) {
  switch(i){
    case 0: colorWipe(strip.Color(0, 0, 0), 50);    // Black/off
            break;
    case 1: colorWipe(strip.Color(253, 126, 10), 50);  // orange
            break;
    case 2: theaterChase(strip.Color(253, 126, 10), 50);  // orange
            break;
    case 3: colorWipe(strip.Color(254, 37, 103), 50);  // pink
            break;
    case 4: theaterChase(strip.Color(254, 37, 103), 50);  // pink
            break;
    case 5: colorWipe(strip.Color(180, 7, 253), 50);  // purple
            break;
    case 6: theaterChase(strip.Color(180, 7, 253), 50); // purple
            break;
    case 7: colorWipe(strip.Color(19, 219, 201), 50);  // Blue
            break;
    case 8: theaterChase(strip.Color(19, 219, 201), 50);  // Blue
            break;
    case 9: colorWipe(strip.Color(189, 228, 10), 50); // Green
            break;
    case 10: theaterChase(strip.Color(189, 228, 10), 50); // Green
            break;
 

  }
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
      delay(wait);
      for (int i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}


