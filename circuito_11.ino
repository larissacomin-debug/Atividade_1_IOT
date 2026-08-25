// C++ code
//

int buttonPin = 7;     // Define o pino onde o botão está conectado
int ledPin = 10;       // Define o pino onde o LED está conectado
bool estadoLed = false; // Guarda o estado atual do LED (false = off / true = on)

void setup() {
  pinMode(ledPin, OUTPUT);       // Configura o pino do LED como saída
  pinMode(buttonPin, INPUT);     // Configura o pino do botão como entrada
}

void loop() {
  // Inverte o estado do LED: se estava desligado, liga; se estava ligado, desliga
  if (digitalRead(buttonPin) == HIGH) {
    estadoLed = !estadoLed;
    digitalWrite(ledPin, estadoLed); // Envia o estado para o LED: true = HIGH = acende, false = LOW = apaga
    delay(500);                      // Aguarda 0,5 segundos para evitar múltiplas leituras do mesmo clique
  }
}