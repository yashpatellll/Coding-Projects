# define BLUE 8
# define GREEN 9
# define RED 10
# define delayTime 10
void setup() {
pinMode(BLUE, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(RED, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
 redValue = 255;
 greenValue = 0;
 blueValue = 0;
 for(int i = 0; i < 255; i += 1) {
  redValue -= 1;
  blueValue += 1;
analogWrite(RED, redValue);
analogWrite(BLUE, blueValue);
delay(delayTime);
 }
  redValue = 0;
 greenValue = 0;
 blueValue = 255;
 
 for(int i = 0; i < 255; i += 1) 
 {
  blueValue -= 1;
  greenValue += 1;
  analogWrite(BLUE, blueValue);
  analogWrite(GREEN, greenValue);
  delay(delayTime);
 }
redValue = 0;
greenValue = 255;
blueValue = 0;

for(int i = 0; i < 255; i += 1) {
  greenValue -= 1;
  redValue += 1;
 analogWrite(GREEN, greenValue);
 analogWrite(RED, redValue);
  delay(delayTime);
 
}
redValue = 100;
greenValue = 0;
blueValue = 0;
}
