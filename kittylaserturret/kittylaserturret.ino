
#define LASER_PIN D2
#define X_PWM_PIN D5
#define Y_PWM_PIN D6

// Pin Assignments
const uint8_t laserPin = LASER_PIN;
const uint8_t xPin = X_PWM_PIN;
const uint8_t yPin = Y_PWM_PIN;

// Servo Endpoints
uint8_t xMin = 0;
uint8_t xMid = 50;
uint8_t xMax = 100;
uint8_t yMin = 0;
uint8_t yMid = 50;
uint8_t yMax = 100;

bool moveServo(char servo, uint8_t position) {
  uint8_t servoChoice;
  if (servo == 'x') servoChoice = xPin;
  else if (servo == 'y')
    servoChoice = yPin;
  else {
    Serial.println('Unrecognized servo choice in moveServo().');
    return false;
  }
  //
  //
  //
  return true;
}

void setup() {
  Serial.begin(115200);

  moveServo('x', 50);
  moveServo('y', 50);
}

void loop() {
  //
}
