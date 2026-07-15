# 🤖 Autonomous LiDAR-Based Floor Cleaning Robot

## 📖 Overview

The **Autonomous LiDAR-Based Floor Cleaning Robot** is an intelligent robotic system designed to clean indoor environments with minimal human intervention. It utilizes **LiDAR-based SLAM (Simultaneous Localization and Mapping)** for real-time mapping and localization, enabling efficient navigation through complex indoor spaces while avoiding obstacles.

The robot is simulated using **Gazebo** and visualized in **RViz**, allowing realistic testing before deployment on hardware. A dedicated **mobile application** enables users to monitor the robot's location, cleaning progress, battery status, and remotely control cleaning operations.

**Intelligent corner detection using LiDAR to deploy an extendable cleaning arm or side brush for improved edge and corner cleaning efficiency.**
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
