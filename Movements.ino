const short VERTICAL_SERVO_START_POSITION = 1700;
const short VERTICAL_SERVO_ROTATE_POSITION = 1820;
const short VERTICAL_SERVO_LEDGE_POSITION = 1650;

const short MIN_SERVO_RANGE = 500;
const short MAX_SERVO_RANGE = 2500;

const short HORIZONTAL_SERVO_START_POSITION = 1850;
const short HORIZONTAL_SERVO_LEDGE_POSITION = 1610;

void goOutSequence(){
  moveToPosition(verticalServo, VERTICAL_SERVO_ROTATE_POSITION, VERTICAL_PWM_PIN);
  delay(2500);
  moveToPosition(horizontalServo, HORIZONTAL_SERVO_LEDGE_POSITION, HORIZONTAL_PWM_PIN);
  delay(2500);
  moveToPosition(verticalServo, VERTICAL_SERVO_LEDGE_POSITION, VERTICAL_PWM_PIN);
  delay(2500);
}

void goInSequence(){
  moveToPosition(verticalServo, VERTICAL_SERVO_ROTATE_POSITION, VERTICAL_PWM_PIN);
  delay(2500);
  moveToPosition(horizontalServo, HORIZONTAL_SERVO_START_POSITION, HORIZONTAL_PWM_PIN);
  delay(2500);
  moveToPosition(verticalServo, VERTICAL_SERVO_START_POSITION, VERTICAL_PWM_PIN);
  delay(2500);
}

void moveToPosition(Servo targetServo, short targetPosition, short targetPwmPin){
  targetServo.write(targetPosition);
}
