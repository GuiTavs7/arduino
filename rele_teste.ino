// DEFINIÇÃO DE VARIÁVEIS, CONSTANTES, PINOS, ETC

const int pino_rele = 9; // Pino ao qual o Módulo Relé está conectado

// ---------------------------------------------------------------------------------

// VOID SETUP - CONFIGURAÇÕES INICIAIS

void setup() {

  Serial.begin(9600);           // Inicializa a comunicação serial em 9600bps

  pinMode(pino_rele, OUTPUT);   // Seta o pino do rele como saída

} // FIM DO VOID SETUP

// ---------------------------------------------------------------------------------

// VOID LOOP - LOOP PRINCIPAL DO PROGRAMA

void loop() {

  digitalWrite(pino_rele, HIGH); // Aciona o pino - HIGH = RELÉ DESLIGADO
  delay(2000);

  digitalWrite(pino_rele, LOW);  // Desativa o pino - LOW = RELÉ LIGADO
  delay(2000);
    
} // FIM DO VOID LOOP

// ---------------------------------------------------------------------------------
