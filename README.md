# Gesture-Controlled Smart Wheelchair 

## Overview
The **Gesture-Controlled Smart Wheelchair** is an innovative mobility solution that allows users to navigate using **hand gestures**. This system utilizes an **accelerometer (ADXL335/ADXL345)** to detect hand movements and translates them into directional commands for the wheelchair. It is designed to improve accessibility for individuals with disabilities, providing an intuitive, hands-free control mechanism.

## Features
- **Gesture-Based Control:** Move forward, backward, left, and right using simple hand gestures.
- **Arduino-Based System:** Processes gesture inputs and controls the motor driver.
- **Motor Driver (L298N):** Enables efficient movement of DC motors.
- **Buzzer Alert System:** Notifies users about potential issues.
- **Compact & Wearable Controller:** Can be worn on the hand for seamless control.
- **Customizable Sensitivity:** Adjust movement response based on user preference.
- **Expandable:** Supports Bluetooth/Wi-Fi for remote control and obstacle detection integration.

## Components Required
| **Component**         | **Description**                 |
|----------------------|--------------------------------|
| Arduino Uno/Nano/Mega | Microcontroller for processing inputs |
| ADXL335/ADXL345 Accelerometer | Detects hand movements and tilt |
| L298N Motor Driver  | Controls DC motors for movement |
| DC Motors (12V) | Moves the wheelchair |
| Buzzer | Alerts users of issues or obstacles |
| Battery Pack (12V) | Powers the system |
| Jumper Wires | Connects all components |
| Wheelchair Frame | Provides structure for movement |

## Working Principle
1. The **accelerometer** detects hand gestures along the X, Y, and Z axes.
2. The **Arduino** processes these values and determines movement direction.
3. The **L298N motor driver** receives signals from the Arduino and drives the **DC motors**.
4. A **buzzer** alerts users of potential hazards or issues.
5. The **Serial Monitor** displays real-time sensor readings and system status.

## Circuit Diagram & Connections
### **Arduino Pin Assignments**
| **Component** | **Arduino Pin** |
|--------------|---------------|
| ADXL335 X-Axis | A0 |
| ADXL335 Y-Axis | A1 |
| ADXL335 Z-Axis | A2 |
| Motor 1A (Left Wheel) | Pin 2 |
| Motor 1B (Left Wheel) | Pin 3 |
| Motor 2A (Right Wheel) | Pin 4 |
| Motor 2B (Right Wheel) | Pin 5 |
| Buzzer | Pin 6 |

## Code Explanation
- Reads data from the **ADXL335 accelerometer** (A0, A1, A2).
- Maps tilt values to movement commands.
- Sends control signals to the **L298N motor driver** to move the wheelchair.
- Activates the **buzzer** when necessary.
- Displays real-time status on the **Serial Monitor**.

## Serial Monitor Example Output
```
X-Axis: 520  
Y-Axis: 400  
Z-Axis: 600  
Status: Moving Forward  
```

## Future Enhancements
- **Bluetooth/Wi-Fi Control** for remote operation.
- **Obstacle Detection** using ultrasonic sensors.
- **Voice Commands** for speech-based wheelchair control.
- **Auto-Braking System** for safety.
- **Battery Monitoring System** with an LCD display.

## How to Use
1. **Assemble all components** according to the circuit diagram.
2. **Upload the code** to the Arduino via the **Arduino IDE**.
3. **Monitor Serial Output** for real-time debugging.
4. **Wear the accelerometer module** on your hand.
5. **Tilt your hand** to control the wheelchair movement.

## Setup & Installation
### Requirements
- **Arduino IDE** installed on your computer.
- **Proper wiring and power supply setup**.

### Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/Gesture-Controlled-Wheelchair.git
   ```
2. Open the **Arduino IDE** and upload the code.
3. Monitor the **Serial Output** for gesture readings.
4. Start using the system by **tilting your hand** to control the wheelchair.

## Applications
- **Assistive Mobility** for individuals with disabilities.
- **Elderly Care** to help seniors navigate safely.
- **Hands-Free Navigation** for robotic applications.
- **Medical & Rehabilitation** for patient mobility.
- **Smart Home Integration** for automated wheelchair control.


## License
This project is **open-source** under the **MIT License**. Feel free to modify and contribute.

## Contact & Support
For any queries, reach out via **GitHub Issues** or email at **[your.email@example.com](mailto:your.email@example.com)**.

🚀 **Let’s innovate for accessibility!** 🦽🔥
