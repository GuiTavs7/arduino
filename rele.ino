// DEFINIÇÃO DE VARIÁVEIS, CONSTANTES, PINOS, ETC

const int pino_rele = 9; // Pino ao qual o Módulo Relé está conectado
int sinal_rele;          // Variável para ler dados recebidos pela serial

// ---------------------------------------------------------------------------------

// VOID SETUP - CONFIGURAÇÕES INICIAIS

void setup() {

  Serial.begin(9600);           // Inicializa a comunicação serial em 9600bps

  pinMode(pino_rele, OUTPUT);   // Seta o pino do rele como saída
  digitalWrite(pino_rele, LOW); // Seta o pino com nivel logico baixo - LOW = RELÉ LIGADO

} // FIM DO VOID SETUP

// ---------------------------------------------------------------------------------

// VOID LOOP - LOOP PRINCIPAL DO PROGRAMA

void loop() {

  // Verifica se tem algum dado na serial

  if (Serial.available() > 0) {
   
    sinal_rele = Serial.read();      // Variável sinal_rele recebe o que o usuário digitar na porta serial

    if (sinal_rele == 'A') {         // Se for A:
      digitalWrite(pino_rele, HIGH); // Aciona o pino - HIGH = RELÉ DESLIGADO
    } 

    if (sinal_rele == 'D') {         // Se for D
      digitalWrite(pino_rele, LOW);  // Desativa o pino - LOW = RELÉ LIGADO
    }

  }

} // FIM DO VOID LOOP

// ---------------------------------------------------------------------------------
