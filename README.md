# **STM32-VCU-Learning**

## **Project Overview**

This repository contains the code and documentation for a **Vehicle Control Unit (VCU)** prototype developed on the **STM32** microcontroller platform. This project is a **learning exercise** focused on understanding embedded systems, motor control, CAN communication, sensor integration, and basic electronics. It is not a fully-fledged VCU but a custom prototype created for educational purposes.

## **Key Features**
- **STM32 microcontroller** (STM32G070) as the central processing unit.
- **PWM motor and LED control** using timers.
- **CAN communication** for vehicle data exchange (Simulated BMS using fake ESP32).
- **Analog sensor input** via ADC (e.g., potentiometer reading).
- **Button inputs** for basic control logic (e.g., turning on/off LEDs).
- **FreeRTOS** for task scheduling and management.

## **Project Goals**
- To understand and implement a basic VCU design with embedded systems.
- To learn the integration of motor drivers, sensors, and communication protocols.
- To work with STM32 HAL libraries, FreeRTOS, and peripheral drivers.
- To develop custom firmware, including drivers for all hardware components.

## **Hardware Requirements**
- **STM32G070** (or any STM32 variant with similar resources)
- **Motor Driver** (e.g., L298 or similar H-Bridge driver)
- **LEDs** (for visual output)
- **Potentiometer** (for analog sensor input)
- **Push buttons** (for control input)
- **CAN transceiver** (e.g., MCP2551)
- **Fake ESP32** (simulating BMS data over CAN)

## **Software Requirements**
- **STM32CubeMX** (for peripheral initialization)
- **STM32CubeIDE** (for code development)
- **FreeRTOS** (for task management)
- **HAL libraries** (for hardware abstraction)
- **MATLAB Simulink/Stateflow** (optional for modeling control algorithms)

## **Project Structure**
- `src/`: Contains the source code for the main application logic.
- `inc/`: Header files for custom drivers and tasks.
- `Drivers/`: STM32 HAL and FreeRTOS files.
- `Core/`: Main initialization files and RTOS configuration.
- `README.md`: Project description and setup instructions.

2. **Open STM32CubeIDE** and import the project.
3. **Generate code** using STM32CubeMX with the required peripherals and FreeRTOS settings.
4. **Write the application logic** in the `src/` folder.
5. **Build the project** and flash the STM32 using your preferred method (e.g., ST-Link).
6. **Test hardware components** (buttons, LEDs, motors, sensors) connected to STM32.

## **Contributions**
This project is intended for learning and exploration. Contributions and improvements are welcome, especially for extending hardware support or optimizing control algorithms.

