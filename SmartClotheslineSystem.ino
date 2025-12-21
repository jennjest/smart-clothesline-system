#include <Servo.h>

Servo clotheslineServo;

#define PIN_RAIN A0
#define PIN_LDR 3
#define PIN_BUZZER 6
#define PIN_SERVO 9

int rainThreshold = 500;
bool buzzerState = false;
int currentServoPos = 0;

void setup() {
  Serial.begin(9600);

  pinMode(PIN_LDR, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);

  clotheslineServo.attach(PIN_SERVO);
  clotheslineServo.write(0);
  currentServoPos = 0;

  Serial.println("=== SMART CLOTHESLINE SYSTEM START ===");
}

void loop() {
  int rainValue = analogRead(PIN_RAIN);
  int ldrValue = digitalRead(PIN_LDR);

  bool isRaining = (rainValue < rainThreshold);
  bool isDark = (ldrValue == HIGH);

  Serial.print("Rain Value: ");
  Serial.print(rainValue);
  Serial.print(" | LDR: ");
  Serial.print(ldrValue);
  Serial.print(" | Raining: ");
  Serial.print(isRaining ? "YES" : "NO");
  Serial.print(" | Dark: ");
  Serial.println(isDark ? "YES" : "NO");

  if (isRaining || isDark) {
    Serial.println(">>> ACTION: RETRACT CLOTHESLINE");

    if (currentServoPos != 90) {
      clotheslineServo.write(90);
      currentServoPos = 90;
      delay(1000);
    }

    if (!buzzerState) {
      tone(PIN_BUZZER, 1000, 500);
      buzzerState = true;
      Serial.println(">>> BUZZER ALERT");
    }

  } else {
    Serial.println(">>> ACTION: EXTEND CLOTHESLINE");

    if (currentServoPos != 0) {
      clotheslineServo.write(0);
      currentServoPos = 0;
      delay(1000);
    }

    buzzerState = false;
    noTone(PIN_BUZZER);
  }

  Serial.println("----------------------------------");
  delay(500);
}