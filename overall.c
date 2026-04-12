// --- Drive Motor Pins (Assuming these are NOT L298N) ---
int MR1_D   = 9; 
int MR1_PWM = 6;
int MR2_D   = 11;
int MR2_PWM = 5;

// --- BO Motor Pins (L298N Standard Configuration) ---
int MBO_IN1 = 8;   // Digital
int MBO_IN2 = 12;  // Digital
int MBO_ENA = 10;  // PWM (Must be PWM pin)

// --- Receiver pins ---
int ch1 = 2; // Throttle
int ch2 = 3; // Steering
int ch3 = 4; // 3rd Joystick (FSi 
void setup() {
  pinMode(MR1_D, OUTPUT); pinMode(MR1_PWM, OUTPUT);
  pinMode(MR2_D, OUTPUT); pinMode(MR2_PWM, OUTPUT);
  
  // BO Motor Setup
  pinMode(MBO_IN1, OUTPUT);
  pinMode(MBO_IN2, OUTPUT);
  pinMode(MBO_ENA, OUTPUT);

  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(ch3, INPUT);

  Serial.begin(57600);
}

// Logic for your standard Drive Motors
void driveMotor(int dirPin, int pwmPin, int value) {
  if (value > 10) {
    digitalWrite(dirPin, HIGH);
    analogWrite(pwmPin, value);
  } else if (value < -10) {
    digitalWrite(dirPin, LOW);
    analogWrite(pwmPin, -value);
  } else {
    analogWrite(pwmPin, 0);
  }
}

// Logic specifically for the L298N (BO Motor)
void driveL298(int in1, int in2, int ena, int value) {
  if (value > 10) { // Forward
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(ena, value);
  } else if (value < -10) { // Backward
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(ena, -value);
  } else { // Stop
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(ena, 0);
  }
}

void loop() {
  // pulseIn blocks the code. With 3 channels, you are wasting up to 75ms per loop.
  int ch1_val = pulseIn(ch1, HIGH, 25000); 
  int ch2_val = pulseIn(ch2, HIGH, 25000);
  int ch3_val = pulseIn(ch3, HIGH, 25000);

  if (ch1_val == 0 || ch2_val == 0 || ch3_val == 0) return; // Failsafe

  int throttle = map(ch1_val, 1000, 2000, -255, 255);
  int steering = map(ch2_val, 1000, 2000, -255, 255);
  int bo_val   = map(ch3_val, 1000, 2000, -255, 255);

  // Mix main drive
  int rMot = constrain(throttle - steering, -255, 255);
  int lMot = constrain(throttle + steering, -255, 255);

  // Execute
  driveMotor(MR1_D, MR1_PWM, rMot);
  driveMotor(MR2_D, MR2_PWM, lMot);
  driveL298(MBO_IN1, MBO_IN2, MBO_ENA, bo_val);
}
