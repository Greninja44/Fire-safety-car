# Fire Rescue Robot

## Overview
The Fire Rescue Robot is an autonomous/semi-autonomous robot designed to detect and extinguish fires in hazardous environments. It is equipped with flame sensors, a motorized movement system, and an extinguisher mechanism, making it a useful tool for fire rescue operations.

## Features
- **Fire Detection:** Uses flame sensors to identify fire sources.
- **Autonomous Navigation:** Moves towards the fire automatically.
- **Manual Control Mode:** Can be controlled remotely if needed.
- **Fire Extinguishing Mechanism:** Uses a water pump or CO2 system to put out fires.
- **Obstacle Avoidance:** Uses ultrasonic sensors to detect and avoid obstacles.

## Components Used
- **Microcontroller:** Arduino uno or mega
- **Flame Sensors** (e.g., IR flame sensor)
- **Ultrasonic Sensors** (for obstacle avoidance)
- **Motor Driver Module** (L298N or similar)
- **Bluetooth module**  (HC-05)

## Installation and Setup
1. Assemble all the components as per the wiring diagram.
2. Install the required Arduino/Raspberry Pi libraries:
   - `Servo.h`
   - `NewPing.h` (for ultrasonic sensor)
   - `FlameSensor.h` (if using a library-based flame sensor)
3. Upload the provided Arduino/Python code to your microcontroller.
4. Test individual components (sensor detection, motor movement, extinguisher activation).
5. Run the robot in a controlled test environment.

## Usage

- **Manual Control Mode:**
  - Operator can control the movement using a remote (Bluetooth/WiFi/RC controller).
  - Can be used in situations requiring precise intervention.


