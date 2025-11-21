/ --- Motor pins ---
int MR1_D   = 9;   // Right motor direction
int MR1_PWM = 6;   // Right motor PWM (must be PWM pin)

int MR2_D   = 11;  // Left motor direction
int MR2_PWM = 5;   // Left motor PWM (must be PWM pin)

// --- Receiver pins ---
int ch1 = 2;  // Throttle channel
int ch2 = 3;  // Steering channel

void setup() {
  pinMode(MR1_D, OUTPUT);
  pinMode(MR1_PWM, OUTPUT);

  pinMode(MR2_D, OUTPUT);
  pinMode(MR2_PWM, OUTPUT);

  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);

  Serial.begin(9600);
}

// --- Function to control motor ---
void driveMotor(int dirPin, int pwmPin, int value) {
  if (value > 0) {
    digitalWrite(dirPin, HIGH);
    analogWrite(pwmPin, value);
  } else if (value < 0) {
    digitalWrite(dirPin, LOW);
    analogWrite(pwmPin, -value);
  } else {
    analogWrite(pwmPin, 0); // stop
  }
}

void loop() {
  // Read receiver pulses (typical range 1000–2000 µs)
  int ch1_val = pulseIn(ch1, HIGH, 30000);  // throttle
  int ch2_val = pulseIn(ch2, HIGH, 30000);  // steering

  // Failsafe check
  if (ch1_val == 0 || ch2_val == 0) {
    driveMotor(MR1_D, MR1_PWM, 0);
    driveMotor(MR2_D, MR2_PWM, 0);
    return;
  }

  Serial.print("Ch1: ");
  Serial.print(ch1_val);
  Serial.print("  Ch2: ");
  Serial.println(ch2_val);

  // Map to motor speed
  int throttle = map(ch1_val, 1000, 2000, -255, 255);
  int steering = map(ch2_val, 1000, 2000, -255, 255);

  throttle = constrain(throttle, -255, 255);
  steering = constrain(steering, -255, 255);

  // Mix throttle + steering
  int rightMotor = constrain(throttle - steering, -255, 255);
  int leftMotor  = constrain(throttle + steering, -255, 255);

  // Drive motors
  driveMotor(MR1_D, MR1_PWM, rightMotor);
  driveMotor(MR2_D, MR2_PWM, leftMotor);
}