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
- **Microcontroller:** Arduino/Raspberry Pi
- **Flame Sensors** (e.g., IR flame sensor)
- **Ultrasonic Sensors** (for obstacle avoidance)
- **Motor Driver Module** (L298N or similar)
- **DC Motors & Wheels** (for movement)
- **Servo Motor** (to adjust the extinguisher position)
- **Water Pump or CO2 System** (for fire suppression)
- **Buzzer & LEDs** (for alert signals)
- **Power Source:** Rechargeable battery pack

## Wiring Diagram
Coming soon...

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
- **Autonomous Mode:**
  - Robot scans for fire using flame sensors.
  - Navigates towards the fire while avoiding obstacles.
  - Activates the extinguisher system to put out the fire.
  - Sends an alert (via buzzer or wireless communication) upon successful extinguishing.

- **Manual Control Mode:**
  - Operator can control the movement using a remote (Bluetooth/WiFi/RC controller).
  - Can be used in situations requiring precise intervention.

## Future Enhancements
- Implement a camera module for **real-time monitoring**.
- Add **AI-based fire detection** for accuracy.
- Integrate with **IoT** for remote operation and alerts.
- Use a **stronger extinguisher system** for larger fires.

## License
This project is open-source and free to modify.

## Author
[Your Name]

