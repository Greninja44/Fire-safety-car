 #include <Arduino.h>

#define GAS_SENSOR_PIN A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(GAS_SENSOR_PIN);

  // Convert the sensor value to a voltage (0-5V)
  float voltage = sensorValue * (5.0 / 1023.0);

  // Map the voltage to a gas concentration value (adjust as needed based on your sensor's specifications)
  float gasConcentration = map(voltage, 0.0, 5.0, 0.0, 100.0); // Adjust the range as needed

  Serial.print("Gas Concentration: ");
  Serial.print(gasConcentration);
  Serial.println(" ppm");

  delay(100); // Adjust the delay as needed
}
