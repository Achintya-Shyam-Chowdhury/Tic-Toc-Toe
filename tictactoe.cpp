#include <iostream>
using namespace std; 


char board[] = {'0','1','2','3','4','5','6','7','8','9'};


void printBoard(void);
int checkWin(void);
int main(void){
	int player, result;


		
	

	printBoard();

}

void printBoard(void)
{
    system("clear");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c   |  %c   |  %c  \n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c   |  %c   |  %c  \n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c   |  %c    |  %c  \n", board[7], board[8], board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}
int checkWin(void){
    if(board[1])
}

