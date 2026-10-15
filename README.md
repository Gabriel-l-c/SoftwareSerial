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

Monitor the output on the hardware serial port to verify the LD2420 initialization.

📂 Project Structure

    /analiseDeSinal/tx_esp8266: Signal data for ESP8266 transmission.

    /analiseDeSinal/tx_ld2420: Signal data directly from the radar.

    /analiseDeSinal/tx_ld2420_rx_esp8266: Combined interactive signal data.

    /softwareSerial_diferentesBaud/: The core firmware testing codebase.

🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the issues page.
📝 License

This project is MIT licensed.
Excelente iniciativa. Um portfólio bem estruturado é exatamente o que separa um repositório amador de um perfil de engenharia focado em produto e qualidade de código (DX).

Vejo pelos arquivos anexados que nosso primeiro projeto é uma análise profunda de integridade de sinal da `SoftwareSerial` no **ESP8266** em comunicação com o radar de ondas milimétricas **LD2420**, testando diferentes *baud rates* (de 9600 a 460800) com capturas de osciloscópio. Essa validação de *hardware-level* é um diferencial técnico fortíssimo para vagas de IoT e Sistemas Embarcados.

Abaixo estão os entregáveis para transformar este repositório em um *case* de nível internacional.

### 1. DIAGNÓSTICO VISUAL & ESTRUTURAL

* **O Estado Atual:** O projeto parece atualmente um "dump de dados" (arquivos `.CSV` e `.BMP` crus de osciloscópio misturados com o código `.ino`). Isso afasta recrutadores que não têm tempo de investigar pasta por pasta.


* **O Que Falta:** Contexto de engenharia. Precisamos explicar *o problema* (ex: a biblioteca SoftwareSerial perde pacotes em altas velocidades) e *a solução/conclusão* (qual é o limite seguro de baud rate para usar o LD2420 no ESP8266 sem perdas). Os prints do osciloscópio precisam ser o destaque visual do README para provar sua capacidade analítica.

---

### 2. README.md DE ALTO NÍVEL

Copie o código abaixo e cole no seu arquivo `README.md`.

```markdown
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

```

2. Open `softwareSerial_diferentesBaud.ino` in the Arduino IDE.
3. Flash the firmware to your ESP8266.
4. Monitor the output on the hardware serial port to verify the LD2420 initialization.

## 📂 Project Structure

* `/analiseDeSinal/tx_esp8266`: Signal data for ESP8266 transmission.
* `/analiseDeSinal/tx_ld2420`: Signal data directly from the radar.
* `/analiseDeSinal/tx_ld2420_rx_esp8266`: Combined interactive signal data.
* `/softwareSerial_diferentesBaud/`: The core firmware testing codebase.

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://www.google.com/search?q=../../issues).

## 📝 License

This project is [MIT](https://www.google.com/search?q=LICENSE) licensed.

```

---

### 3. ORGANIZAÇÃO DO REPOSITÓRIO (SEO e Estrutura)

Para o GitHub entender e ranquear seu projeto, faça as seguintes configurações nas "engrenagens" no canto superior direito da página principal do repositório:

*   **About (Descrição Curta):**
    `Signal integrity benchmark of ESP8266 SoftwareSerial interfacing with LD2420 mmWave radar across extreme baud rates.`
*   **Tags/Topics (Essencial para SEO no GitHub):**
    `esp8266`, `signal-integrity`, `iot-hardware`, `ld2420`, `mmwave-radar`, `softwareserial`, `oscilloscope`, `uart-communication`, `c-plus-plus`.
*   **Limpeza do Repositório:**
    Mova todos os arquivos pesados de dados (`.CSV`, `.BMP`) e os manuais PDF (`HLK-LD2420-Product Manual V1.2.pdf`)[cite: 2] para uma pasta chamada `docs` ou `assets`. Deixe na raiz do projeto apenas o `README.md`, o arquivo `LICENSE` e a pasta do código-fonte (`/softwareSerial_diferentesBaud`). Isso deixa a visualização incrivelmente mais limpa para outro desenvolvedor.

Como você avalia essa estrutura para o seu primeiro projeto? Se estiver de acordo, envie o link ou os dados do próximo repositório que vamos lapidar.

```
