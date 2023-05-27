void setupServos(){
  setupVerticalServo();
  setupHorizontalServo();  
}

void setupHorizontalServo(){
  horizontalServo.attach(HORIZONTAL_PWM_PIN);
  moveToPosition(horizontalServo, HORIZONTAL_SERVO_START_POSITION, HORIZONTAL_PWM_PIN);
}

void setupVerticalServo(){
  verticalServo.attach(VERTICAL_PWM_PIN);
  moveToPosition(verticalServo, VERTICAL_SERVO_START_POSITION, VERTICAL_PWM_PIN);
}
