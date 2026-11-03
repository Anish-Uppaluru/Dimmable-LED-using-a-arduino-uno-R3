# Dimmable-LED-using-a-arduino-uno-R3
prenote-This was my first project and possibly the last directly involving me tinkering with solely leds and as mentioned the first involving an actual arduino and wires and a breadboard  

aim- to prepare a led of adjustable brightness which can be controlled using a potentiometer 
apparatus- arduino uno r3,potentiometer(ICON10K-thats the name embedded onto the surface of the potentiometer),breadboard,connecting wires,2 leds(green and orange),appropriate number of jumper wires
working-
the potentiometer(image attached)consists of a black cylinder which upon rotating we will be able to vary its resistance and inherently the output voltage 
this output voltage v2 is calculated as (5.0/1023.0)*Varduino
Varduino can be achieved through the analogRead() function, which reads the voltage supplied to the analog pin A3 and converts it into a digital value ranging from 0 to 1023, owing to the 10-bit ADC of the Arduino Uno R3.

This digital value is then used to calculate the actual voltage at the middle terminal (wiper) of the potentiometer using the formula
Here, Varduino represents the digital reading obtained through analogRead() and not the voltage itself.

The next step involves converting this digital reading into a value suitable for controlling the brightness of the LEDs. This is achieved using the map() function, which converts the range of 0–1023 into 0–255.

This conversion is necessary because the Arduino Uno R3 uses an 8-bit PWM output through its PWM-enabled digital pins.

The analogWrite() function is then used to generate PWM signals through digital pins 3 and 5, which are connected to the green and orange LEDs respectively, with individual current-limiting resistors.

PWM (Pulse Width Modulation) works by rapidly switching the output between HIGH and LOW states. By varying the proportion of time the signal remains HIGH, known as the duty cycle, the perceived brightness of the LEDs can be controlled.

A PWM value of 0 corresponds to 0% duty cycle, while a value of 255 corresponds to 100% duty cycle. Intermediate values provide intermediate brightness levels.

Since both LEDs receive the same PWM value, they brighten and dim simultaneously.

The entire process is continuously repeated inside the loop() function, allowing the brightness of both LEDs to change in accordance with the rotation of the potentiometer.

result- Successfully developed a potentiometer-controlled LED dimmer using an Arduino Uno R3, in which the brightness of two LEDs (green and orange) can be adjusted simultaneously by rotating a 10kΩ potentiometer.
