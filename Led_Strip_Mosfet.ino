/*einfach Arduino-Code zum steuern eines LED-Strips mit drei Grundfarben
 *funktioniert nur mit seperaten Verstärkern z.B. Mosfets
 *wiring-circuit: 
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
