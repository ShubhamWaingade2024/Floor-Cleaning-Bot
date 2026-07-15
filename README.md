# 🤖 Autonomous LiDAR-Based Floor Cleaning Robot

## 📖 Overview

The **Autonomous LiDAR-Based Floor Cleaning Robot** is an intelligent robotic system designed to clean indoor environments with minimal human intervention. A **LiDAR sensor** continuously scans the surroundings to generate a real-time map of the environment using **SLAM (Simultaneous Localization and Mapping)**. The generated map is displayed on a **mobile application**, allowing users to monitor the robot's live position, cleaning progress, and navigation path.

A **Raspberry Pi** serves as the main processing unit, handling LiDAR data, mapping, path planning, and communication with the mobile application. It interfaces with the motor controller and onboard electronics to autonomously navigate through indoor environments while avoiding obstacles.

To improve cleaning performance, the robot incorporates **intelligent corner detection**. When the LiDAR identifies corners or hard-to-reach edges, a **rack-and-pinion-based extendable cleaning arm** is actuated to reach beyond the robot's circular body, ensuring efficient cleaning of corners and wall edges before retracting and resuming normal operation.

---

## ✨ Features

- 🤖 Fully autonomous floor cleaning
- 🗺️ LiDAR-based SLAM for real-time mapping
- 📍 Real-time localization and navigation
- 🚧 Dynamic obstacle detection and avoidance
- 🏠 Complete room coverage planning
- 📱 Mobile application for robot monitoring and control
- 🔋 Battery status monitoring
- 🎯 Intelligent path planning
- 🧭 Manual and autonomous operating modes
- 📡 Wireless communication
- 🧹 Edge and corner cleaning support
- 🔄 Return-to-docking functionality (Future Enhancement)

---

## 🛠️ Technologies Used

### Robotics
- ROS 2
- Gazebo

### Embedded Systems
- Raspberry Pi 4 Model B
- Embedded C
- UART Communication
- Motor Driver Interface

### Sensors
- LiDAR Sensor
- IMU
- Wheel Encoders
- Ultrasonic Sensors

### Mobile Application
- Replit
- WebSocket Communication

### CAD & Design
- KiCad (PCB Design)
- SolidWorks (Mechanical Design)

---

## ⚙️ System Workflow

```text
LiDAR
   │
   ▼
SLAM Toolbox
   │
   ▼
Occupancy Grid Map
   │
   ▼
Motor Controller
   │
   ▼
Raspberry Pi Firmware
   │
   ▼
Cleaning Robot
```

---

## 📱 Mobile Application Features

The companion mobile application allows users to:

- 📍 View the robot's live location
- 🗺️ Monitor the generated map
- ▶️ Start cleaning
- ⏸️ Pause cleaning
- ⏹️ Stop cleaning
- 🔋 Check battery percentage
- 📶 Monitor connection status
- 📈 View cleaning progress
- 📊 Access cleaning history
- 🏠 Send robot back to charging dock

---

## 🧠 Working Principle

1. The robot initializes all onboard sensors.
2. LiDAR scans the surrounding environment.
3. SLAM generates a real-time occupancy map.
4. Navigation computes an optimal cleaning path.
5. The robot autonomously cleans the floor while avoiding obstacles.
6. Live data is transmitted to the mobile application.
7. The robot continuously updates the map and adjusts its route for efficient coverage.

---

## 📷 Project Preview

<p align="center">
  <img src="Interior design-2.jpg" alt="Autonomous Floor Cleaning Robot" width="900">
</p>

---

## 🎯 Applications

- Smart Homes
- Hospitals
- Hotels
- Offices
- Shopping Malls
- Warehouses
- Educational Robotics
- Research & Development
- Industrial Automation

---

## 🚀 Future Enhancements

- 🔄 Automatic docking and charging
- 🧠 AI-based cleaning optimization
- 🏢 Multi-floor mapping and navigation
- ☁️ Cloud-based monitoring and analytics
- 🎙️ Voice assistant integration
- 👥 Multi-robot coordination
- 📷 Camera-based object recognition
- 🌐 Remote monitoring over the Internet
- 📅 Scheduled cleaning tasks
- 📍 Save and reload maps for multiple rooms or floors
- ⚡ Adaptive cleaning modes based on floor type and dirt detection

---

## 📜 License

This project is developed for educational, research, and learning purposes.
