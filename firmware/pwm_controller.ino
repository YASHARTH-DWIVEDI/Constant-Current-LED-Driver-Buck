const int pwmPin = 9;
const int sensePin = A0;

const float referenceCurrent = 0.35;
const float senseResistor = 0.22;
const float adcRefVoltage = 5.0;

int pwmValue = 120;

void setup() {
  pinMode(pwmPin, OUTPUT);
  analogWrite(pwmPin, pwmValue);
}

void loop() {
  int adcValue = analogRead(sensePin);
  float senseVoltage = (adcValue * adcRefVoltage) / 1023.0;
  float ledCurrent = senseVoltage / senseResistor;

  float tolerance = 0.01; // 10mA tolerance
  if (ledCurrent < (referenceCurrent - tolerance)) pwmValue++;
  else if (ledCurrent > (referenceCurrent + tolerance)) pwmValue--;

  pwmValue = constrain(pwmValue, 0, 255);
  analogWrite(pwmPin, pwmValue);

  delay(5);
}
