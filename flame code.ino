// Define the sensor and buzzer pins
const int flameSensorPin = A2;  // Flame sensor connected to analog pin A2
const int buzzerPin = 13;       // Buzzer connected to digital pin 11

// Define a threshold value for flame detection
const int threshold = 1018;      // Adjust this value based on the sensitivity of your flame sensor

void setup() {
  // Initialize the flame sensor pin as an input
  pinMode(flameSensorPin, INPUT);
  
  // Initialize the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
  
  // Start serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Read the value from the flame sensor
  int sensorValue = analogRead(flameSensorPin);
  
  // Print the sensor value to the serial monitor
  Serial.print("Flame Sensor Value: ");
  Serial.println(sensorValue);

  // Check if the sensor value is above the threshold (indicating a flame)
  if (sensorValue > threshold) {
    // Activate the buzzer
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Flame detected! Buzzer ON.");
  } else {
    // Deactivate the buzzer
    digitalWrite(buzzerPin, LOW);
    Serial.println("No flame detected. Buzzer OFF.");
  }

  // Add a small delay to avoid overwhelming the serial monitor
  delay(10000);
}
