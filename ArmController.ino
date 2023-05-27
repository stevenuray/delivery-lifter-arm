#include <Servo.h>

Servo horizontalServo;
Servo verticalServo;

const short HORIZONTAL_PWM_PIN = 3;
const short VERTICAL_PWM_PIN = 5;

const short TOGGLE_BUTTON_PIN = 12;

const int BUTTON_SWITCH_DELAY_MILLIS = 1000;

void setup() {
  Serial.begin(9600);
  setupServos();
  pinMode(TOGGLE_BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  setStateFromInputButton();
  delay(500);
}
