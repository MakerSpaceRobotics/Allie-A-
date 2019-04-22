void setup() {
  Serial.begin(9600);
}

void loop() {

  printBoard();
  getInput();
  // CheckForWinner();
}

void printBoard()
{
  Serial.println("Tic tac toe");
  Serial.print("_");
  Serial.print(board[0]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[1]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[2]);
  Serial.println("_");
  // next row 
  Serial.print("_");
  Serial.print(board[3]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[4]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[5]);
  Serial.println("_");
  //next row 
  Serial.print(" ");
  Serial.print(board[6]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[7]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[8]);
  Serial.println(" ");
  Serial.print("select spot ");
  Serial.print(player);
  Serial.println("");
  
  
}

void getInput()
{

  if (player ==1)
  {
    Serial.println("Player 1, select square");
  }
  if (player ==2)
{
Serial.println("player 2, select square");
}
while (!Serial.available())
{
  delay(50);
}
input = Serial.parseInt();

}

/*
  if (lock == 0){
  Serial.println("Tic tac toe");
  Serial.print("_");
  Serial.print(board[0]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[1]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[2]);
  Serial.println("_");
  // next row 
  Serial.print("_");
  Serial.print(board[3]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[4]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[5]);
  Serial.println("_");
  //next row 
  Serial.print(" ");
  Serial.print(board[6]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[7]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[8]);
  Serial.println(" ");
  Serial.print("select spot ");
  Serial.print(player);
  Serial.println("");
  }
  else{
    Serial.println(" type Restart to play again");
  }

  while (!Serial.available()) {
    delay(50);
  }

  if (player == 1) {
    imput = Serial.parseInt();
    board[imput - 1] = 88;
    checkGame();
    printwin();
    player = 2;
  } else {
    imput = Serial.parseInt();
    board[imput - 1] = 79;
    checkGame();
    printwin();
    player = 1;
  }
}

void checkGame() {
  if ((board[0] + board[1] + board[2]) == 264) {
    win = 1;
  } else if ((board[3] + board[4] + board[5]) == 264) {
    win = 1;
  } else if ((board[6] + board[7] + board[8]) == 264) {
    win = 1;
  } else if ((board[0] + board[4] + board[8]) == 264) {
    win = 1;
  } else if ((board[2] + board[4] + board[6]) == 264) {
    win = 1;
  } else if ((board[0] + board[3] + board[6]) == 264) {
    win = 1;
  } else if ((board[1] + board[4] + board[7]) == 264) {
    win = 1;
  } else if ((board[2] + board[5] + board[8]) == 264) {
    win = 1;
  } else if ((board[0] + board[1] + board[2]) == 237) {
    win = 2;
  } else if ((board[3] + board[4] + board[5]) == 237) {
    win = 2;
  } else if ((board[6] + board[7] + board[8]) == 237) {
    win = 2;
  } else if ((board[0] + board[4] + board[8]) == 237) {
    win = 2;
  } else if ((board[2] + board[4] + board[6]) == 237) {
    win = 2;
  } else if ((board[0] + board[3] + board[6]) == 237) {
    win = 2;
  } else if ((board[1] + board[4] + board[7]) == 237) {
    win = 2;
  } else if ((board[2] + board[5] + board[8]) == 237) {
    win = 2;
  }

}

void printwin() {
  if (win == 1) {
    Serial.println("congratulations X's you are the champ BRO");
    lock = 1;
  } else if (win == 2) {
    Serial.println("congratulations O's you are the champ BRO");
    lock = 1;
  }
}

void resetBoard (){
  board[9] =49;
  board[1] =50; 
  board[2] =51;
  board[3] =52;
  board[4] =53;
  board[5] =54;
  board[6] =55;
  board[7] =56;
  board[8] =57;
  board[9]=57;
}



  void printBoard(){
    Serial.println("Tic tac toe");
  Serial.print("_");
  Serial.print(board[0]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[1]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[2]);
  Serial.println("_");
  // next row 
  Serial.print("_");
  Serial.print(board[3]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[4]);
  Serial.print("_|");
  Serial.print("_");
  Serial.print(board[5]);
  Serial.println("_");
  //next row 
  Serial.print(" ");
  Serial.print(board[6]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[7]);
  Serial.print(" |");
  Serial.print(" ");
  Serial.print(board[8]);
  Serial.println(" ");
  Serial.print("select spot ");
  Serial.print(player);
  Serial.println("");


  }


  */
    
    






