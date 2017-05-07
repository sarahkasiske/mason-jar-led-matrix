# mason-jar-led-matrix

The Mason Jar LED Matrix is a four by four matrix of 16 LEDs encased within 16 mason jars. The LEDs will be programed to follow a four step sequence. When a jar is pressed or turned the first time the LED within will turn on. If it is pressed a second time the LED will change colors. If pressed again the LED will change to a different color. When the jar is pressed four times it will turn off and the sequence will reset. The LEDs will be controlled by buttons that are placed beneath the jars.

## Code Plan
### Turn LED on 
* Read Button 
* Turn on LED

### Change LED Color 
* Read Button 
* Change the color of the LED

### Change LED Color
* Read Button 
* Change the color of the LED

### Turn LED Off 
* Read Button 
* Turn off LED

### Components 
* 16 RGB LEDs 
* 16 buttons *Arduino Mega

## Research
Before I began my project I started conducting some research to decide how I should create the LED matrix. I knew the LEDs would need to be placed in some kind of containers that would fit in a frame to hold them all together. To find some ideas I decided to go to the Container Store. I found several interesting options including a hockey puck holder, magnetic containers and different jars.

![Magnetic Jars](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2787.JPG)
![Hocky Puck Case](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2788.JPG)
![Jam Car](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2805.JPG)

After analysing some different options I decided to use mason jars for my project. I thought they would be able to easily activate the buttons as the ring the jar is attached to is separate from the lid covering the jar. I could attach the ring and button to a board to hold the jar and then screw in the mason jar and lid to press and activate the button. 

## Prototype
After contemplating the idea of using a mason jar I went home and began testing with an LED, button and jar to see if it would work. I was able to get everything working relatively easily and the jar seemed to be working well with the button to turn the LED on and off. 

![LED Connected to Button](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2813.JPG)

[View Prototype](https://www.youtube.com/watch?v=xtQmtHKlAqc)

## Building
Knowing the mason jars would work I began building a frame for the matrix. I had a few wooden crates I was not using so I took one apart and used the wood to build the frame. To build the frame I first laid out the mason jars and measured to decide how large the frame should be. 

![Mason Jars in Frame](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2869.JPG)

When I knew what size the frame should be I began building it from the outside in. I nailed together four boards to form the outside of the frame and then built a hidden shelf to hold the Arduino. 

![Wooden Frame](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2867.JPG)
![Frame With Shelf](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2889.JPG)
![Painted Frame](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2895.JPG)

When the frame was completed I began working with the mason jars. While working with the prototype I noticed that because the jars are glass too much light was leaving through the sides of the jars. This made the light coming from the LEDs less direct. To alleviate this issue I painted the insides of the mason jars to direct the light from the LEDs outward. 

![Painted Jars](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2880.JPG)

The next step in my process was to create a backing to attach the buttons and jars to. I decided to use white foam board to create the backing. I used two layers of foam board. One to go underneath the jars and one to go around them, holding the jars in place.

![Foam Board with Circles Cut Out](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2930.JPGG)
![Frame With Painteed Jars Inside](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2933.JPG)

## Soldering
After completing the encasement for the leds I began soldering female headers to all of the buttons and LEDs to be able to connect them with wire to the Arduino. 

![Soldering LED](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2936.JPG)
![Soldering Button](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2967.JPG)

## Wiring
When all of the LEDs and buttons were soldered I began wiring everything together. I started by connecting all of LEDs together in a string. 

[View LED Strand Test](https://www.youtube.com/edit?o=U&video_id=U42lpVCshm4)

![Strand of LED Lights](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_2957.JPG)
![Fame with Wires](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_3018%202.JPG)
![Fame with Wires](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_3021.JPG)
![Fame with Wires](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_3022%202.JPG)
![Frame With Painted Jars Inside](https://github.com/sarahkasiske/mason-jar-led-matrix/blob/master/img/IMG_3017%202.JPG)


After ensuring all the LEDs were working I began wiring the buttons and LEDs into the frame. I used a hot glue gun to glue the buttons and wire to the frame to keep track of where the wires were going and to limit the chances the buttons or LEDs would be accidentally disconnected. 

## Coding

When all of the components were working together I began working on the code. I started with an example from the NeoPixel library and began changing things to make the LEDs function similarly to my initial concept. Unfortunately, with the time I spent building the matrix I did not leave myself much time to work on the code. Because of time constraints I was not able to get the matrix working exactly how I wanted. However, I was able to get all of the buttons working so that when any button is pressed the lights will all change. Hopefully in the next iteration of the matrix I will be able to code each button to turn on and off an individual LED. 

[Mason Jar LED Matrix Test 1](https://www.youtube.com/edit?o=U&video_id=P4bbF3Muljc4)

[Mason Jar LED Matrix Test 2](https://www.youtube.com/edit?o=U&video_id=JyYgt92AW_c)

[Mason Jar LED Matrix Test 3](https://www.youtube.com/watch?v=V9oEZD9fRm8)
