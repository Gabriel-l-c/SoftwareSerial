#include <SoftwareSerial.h>

// Define os pinos: RX como GPIO12 (D6) e TX como GPIO15 (D8)
// Nota: Mesmo que você use apenas o TX, a biblioteca exige definir um pino de RX.
const int pinoRX = 12; 
const int pinoTX = 15; 

// Cria a instância da serial virtual chamada "serialCustom"
SoftwareSerial serialCustom(pinoRX, pinoTX);

void setup() {
  // Inicializa a serial via software a 115200 bps
  serialCustom.begin(460800);
}

void loop() {
  // Envia o caractere 'U' (0x55) para gerar a onda quadrada no osciloscópio
  serialCustom.write('U'); 
  
  // Intervalo de 50ms para o trigger do osciloscópio
  delay(50); 
}
