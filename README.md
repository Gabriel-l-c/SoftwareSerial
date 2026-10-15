# 📡 ESP8266 & LD2420: UART Signal Integrity Benchmark

<div align="center">
  <img src="https://img.shields.io/badge/Hardware-ESP8266-blue?style=for-the-badge&logo=espressif" alt="ESP8266" />
  <img src="https://img.shields.io/badge/Sensor-LD2420_mmWave-lightgrey?style=for-the-badge" alt="LD2420" />
  <img src="https://img.shields.io/badge/C%2B%2B-Arduino_Framework-00599C?style=for-the-badge&logo=c%2B%2B" alt="C++" />
  <img src="https://img.shields.io/badge/Analysis-Oscilloscope_Data-red?style=for-the-badge" alt="Signal Analysis" />
</div>

<br>

> **Solving edge communication bottlenecks:** A deep-dive signal integrity analysis of SoftwareSerial capabilities on the ESP8266 when interfacing with the LD2420 millimeter-wave radar sensor across extreme baud rates.

## 💡 The Problem
In IoT edge development, utilizing software-emulated UART (`SoftwareSerial`) is often necessary when hardware UART pins are occupied. However, the **LD2420 mmWave radar** generates high-frequency data streams. This project empirically benchmarks and investigates at which baud rate the ESP8266's SoftwareSerial begins to experience signal degradation, framing errors, and data loss.

## 📊 Visual Analysis & Findings

*(Sugestão: Insira aqui a melhor imagem gerada pelo seu osciloscópio, por exemplo, o arquivo analiseDeSinal/tx_esp8266/115200 OSC/F0006TEK.BMP convertida para PNG)*
> **Figure 1:** Oscilloscope capture of the TX/RX lines at 115200 baud, demonstrating signal squareness and timing tolerances.

### Key Insights:
* **Reliable Threshold:** Identifies the maximum stable baud rate for error-free telemetry ingestion.
* **Degradation Point:** Visual evidence of capacitance issues and bit-shifting at 250,000+ baud.
* **Hardware Validation:** Raw `.CSV` and `.BMP` exports from Tektronix oscilloscopes provided for independent validation.

## ⚙️ Features
- **Multi-Baud Rate Testing:** Automated testing scripts ranging from `9600` to `460800` bps.
- **Signal Captures:** Real hardware validation using digital oscilloscopes (CH1 CSV data included).
- **Custom Firmware:** Isolated `.ino` testing environments for TX-only and TX/RX echo analysis.

## 🛠️ Technologies & Tools
* **Microcontroller:** ESP8266 (NodeMCU/Wemos)
* **Sensor:** Hi-Link LD2420 (24GHz mmWave Radar)
* **Firmware:** C++ (Arduino Core)
* **Validation:** Digital Oscilloscope Data Analysis

## 🚀 How to Run and Reproduce

### Prerequisites
* ESP8266 board and an LD2420 sensor.
* Arduino IDE with ESP8266 board manager installed.

### Wiring
| ESP8266 Pin | LD2420 Pin | Note |
| :--- | :--- | :--- |
| `D5` (RX) | `TX` | SoftwareSerial RX |
| `D6` (TX) | `RX` | SoftwareSerial TX |
| `3V3` | `VCC` | Power |
| `GND` | `GND` | Common Ground |

### Execution
1. Clone this repository:
   ```bash
   git clone [https://github.com/SEU-USUARIO/esp8266-ld2420-signal-analysis.git](https://github.com/SEU-USUARIO/esp8266-ld2420-signal-analysis.git) 
   
2. Open softwareSerial_diferentesBaud.ino in the Arduino IDE.

3. Flash the firmware to your ESP8266.

4. Monitor the output on the hardware serial port to verify the LD2420 initialization.
