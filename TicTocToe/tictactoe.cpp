#include <cstdlib>
#include <iostream>
using namespace std;

char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void printBoard(void);
int checkWin(void);

int main(void) {
  int player = 1, input, result;
  char mark;
  bool stat = true;
  while (stat) {

    printBoard();
    mark = (player % 2 == 0) ? 'x' : 'o';

    cout << "Enter a value between 1-9 --Player: "
         << ((player % 2 == 0) ? 2 : 1) << endl;
    cin >> input;

    if (input < 1 || input > 9) {
      cout << "Invalid Input" << endl;
    }
    if (board[input] == 'x' || board[input] == 'o') {
      cout << "can't overwrite respective value" << endl;
      continue;
    }
    board[input] = mark;
    result = checkWin();
    cout << "Checkeed" << endl;
    if (result == 1) {
      cout << "Player - " << ((player % 2 == 0) ? 2 : 1) << " Won the game"
           << endl;
      printBoard();
      break;
    } else if (result == 0) {
      cout << "Draw" << endl;
      printBoard();
      break;
    }
    player++;
  }
  // printBoard();

  return 0;
}

void printBoard()

{

  printf("\n\n");
  printf("=== TIC TAC TOE ===\n\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
  printf("_____|_____|_____\n");
  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
  printf("     |     |     \n");
  printf("\n\n");
}

int checkWin(void) {
  if (board[1] == board[2] && board[2] == board[3]) {
    return 1;
  } else if (board[4] == board[5] && board[5] == board[6]) {
    return 1;
  } else if (board[7] == board[8] && board[8] == board[9]) {
    return 1;
  } else if (board[7] == board[4] && board[4] == board[1]) {
    return 1;
  } else if (board[8] == board[5] && board[5] == board[2]) {
    return 1;
  } else if (board[9] == board[6] && board[6] == board[3]) {
    return 1;
  } else if (board[1] == board[5] && board[5] == board[9]) {
    return 1;
  } else if (board[3] == board[5] && board[5] == board[7]) {
    return 1;
  }
  int count = 0;
  for (int i = 0; i <= 9; i++) {
    if (board[i] == 'X' || board[i] == 'O') {
      count++;
    }
  }
  if (count == 9) {
    return 0;
  }
  return -1;
}
