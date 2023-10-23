// Juego Tic-Tac-Toe
// Dos jugadores se turnan para ocupar casillas en un tablero de 3x3
// Gana el primer jugador que complete una fila, columna o diagonal con sus fichas

const int BUTTON1_PIN = 3;
const int BUTTON2_PIN = 2;
const int LED_PINS[] = {13, 12, 11, 10, 9, 8, 7, 6, 5};
const int PLAYER_1 = 1;
const int PLAYER_2 = 2;

int currentPosition = 0;
int button1State = LOW;
int button2State = LOW;
int currentPlayer = PLAYER_1;
int occupiedPlaces = 0;
boolean gameOver = false;
boolean blink = true;
int state[9];  // Agrega esta línea para declarar el arreglo 'state'
int player2Count = 10;  // Agrega esta línea para declarar 'player2Count'

void setup() {
  Serial.begin(9600);
  
  pinMode(BUTTON1_PIN, INPUT);
  pinMode(BUTTON2_PIN, INPUT);

  for (int i = 0; i < 9; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void checkButton1() {
  // BUTTON 1
  int button = digitalRead(BUTTON1_PIN);
  
  if (button == HIGH && button1State == LOW) {
    button1State = HIGH;
    
    while (true) {
      currentPosition = (currentPosition + 1) % 9;
      if (state[currentPosition] == 0) {
        break;
      }
    }
  }
   
  if (button == LOW && button1State == HIGH) {
    button1State = LOW;
  }
}

void checkButton2() {
  // BUTTON 2
  int button = digitalRead(BUTTON2_PIN);
  
  if (button == HIGH && button2State == LOW) {
    state[currentPosition] = currentPlayer;
    occupiedPlaces++;
    Serial.println(occupiedPlaces);
   
    button2State = HIGH;
    
    currentPlayer = (currentPlayer == PLAYER_1) ? PLAYER_2 : PLAYER_1;
    
    if (occupiedPlaces == 9) {
      gameOver = true;
    }
  }
  
  if (button == LOW && button2State == HIGH) {
    button2State = LOW;
  }
}

int checkWinner() {
  // Comprueba filas
  for (int i = 0; i < 9; i += 3) {
    if (state[i] != 0 && state[i] == state[i + 1] && state[i] == state[i + 2]) {
      return state[i];
    }
  }
  
  // Comprueba columnas
  for (int i = 0; i < 3; i++) {
    if (state[i] != 0 && state[i] == state[i + 3] && state[i] == state[i + 6]) {
      return state[i];
    }
  }
  
  // Comprueba diagonales
  if (state[0] != 0 && state[0] == state[4] && state[0] == state[8]) {
    return state[0];
  }
  if (state[2] != 0 && state[2] == state[4] && state[2] == state[6]) {
    return state[2];
  }
  
  // No hay ganador
  return 0;
}

void setLed(int id, int player) {
  if (player == 0) {
    digitalWrite(id, LOW);
  } else if (player == 1) {
    digitalWrite(id, HIGH);
  } else if (player == 2) {
    digitalWrite(id, (player2Count > 5) ? HIGH : LOW);
  }
}

void resetGame() {
  for (int i = 0; i < 9; i++) {
    state[i] = 0;  // Restablece el estado de todas las casillas a 0 (vacías)
  }
  currentPosition = 0;
  currentPlayer = PLAYER_1;
  occupiedPlaces = 0;
  gameOver = false;
  for (int i = 0; i < 9; i++) {
    digitalWrite(LED_PINS[i], LOW);  // Apaga todas las luces LED
  }
  Serial.println("Juego reiniciado. Comienza un nuevo juego.");
}

void loop() {
  if (!gameOver) {
    checkButton1();
    checkButton2();
    
    // Comprobar si hay un ganador
    int winner = checkWinner();
    if (winner != 0) {
      gameOver = true;
 
      // Reiniciar el juego después de un breve retraso
      delay(3000);  // Espera 2 segundos antes de reiniciar
      resetGame();
    }
  }
  
  for (int i = 0; i < 9; i++) {
    if (i != currentPosition) {
      setLed(LED_PINS[i], state[i]);
    }
  }
  
  if (!gameOver) {
    if (blink) {
      digitalWrite(LED_PINS[currentPosition], HIGH);
    } else {
      digitalWrite(LED_PINS[currentPosition], LOW);
    }
    blink = !blink;
  }
  
  player2Count--;
  if (player2Count < 0) {
    player2Count = 10;
  }
  
  delay(100);
}

