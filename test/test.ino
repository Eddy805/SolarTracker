// SolarTracker test program
//
//           PhotoR     10K
// +5    o---/\/\/--.--/\/\/---o GND
//                  |
// Pin 0 o-----------
//
//            PhotoR     10K
// +5    o---/\/\/--.--/\/\/---o GND
//                  |
// Pin 1 o-----------
//


int ldr1Pin = 0;
int ldr2Pin = 1;
int ldr1Value = 0;
int ldr2Value = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  ldr1Value = analogRead(ldr1Pin);
  ldr2Value = analogRead(ldr2Pin);
  Serial.print("LDR1: ");
  Serial.print(ldr1Value);
  Serial.print(" LDR2: ");
  Serial.print(ldr2Value);
  Serial.print("DIFF: ");
  Serial.println(ldr1Value - ldr2Value);

  delay(1000);
}
