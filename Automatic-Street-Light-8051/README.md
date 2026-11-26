Automatic Street Light System Using 8051

Project Overview

An automatic street light control system using an 8051 microcontroller and LDR sensor.

The system detects ambient light intensity and automatically controls street light operation.

Hardware Components

- AT89C51 Microcontroller
- LDR Sensor
- ADC0804
- BC547 Transistor
- 5V Relay
- 10K Resistor
- 1K Resistor
- Flyback Diode

Software Tools

- Embedded C
- Keil µVision
- Proteus Design Suite

Working Principle

1. LDR detects surrounding light intensity.
2. ADC0804 converts the analog signal into digital data.
3. AT89C51 reads the ADC output.
4. The microcontroller compares the reading with predefined thresholds.
5. Street light switches ON in darkness and OFF in bright conditions.

Features

- Automatic light detection
- Automatic ON/OFF control
- ADC interfacing
- GPIO control
- Hysteresis-based switching logic

Project Status

Source code prepared.
Hardware implementation and simulation pending.

Author

Vaishnavi

Programming Language

Embedded C
