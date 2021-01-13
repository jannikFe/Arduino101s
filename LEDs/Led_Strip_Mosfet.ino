/*
 *simple Arduino-code to control your led-strip
 *you can easily change each color individually via potentiomenters
 *an amplifier, such as MOSFETs, is necessary => more details in the circuit-digram
 *Which electrical components do you need? 
 *1 Arduino (nano or uno works with this code)
 *1 LM7805 voltage regulator
 *3 IRFZ44N n-channel mosfets
 *3 potentionmeters (anything between 10k to 50k works)
 *3 (tiny) resistors with a resistance between 10k to 15k and 1/4W at least
 * your 12V led-strip and your 12V power supply
 *some soldering skills :)
 */
#define POT_IN1 A0
#define POT_IN2 A1
#define POT_IN3 A2

#define RED 3
#define GREEN 5
#define BLUE 6

int red = 0;
int green = 0;
int blue = 0;

void setup() {
pinMode(POT_IN1, INPUT);
pinMode(POT_IN2, INPUT);
pinMode(POT_IN3, INPUT);

pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);

analogWrite(RED, red);
analogWrite(GREEN, green);
analogWrite(BLUE, blue);
}

void loop() {
 
 red = map(analogRead(POT_IN1), 0, 1023, 0, 255);
 green = map(analogRead(POT_IN2), 0, 1023, 0, 255);
 blue = map(analogRead(POT_IN3), 0, 1023, 0, 255);

 analogWrite(RED, red);
 analogWrite(GREEN, green);
 analogWrite(BLUE, blue);
  

}
