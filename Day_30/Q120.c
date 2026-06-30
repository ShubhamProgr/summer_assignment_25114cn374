// Tic Tac Toe ( Mini Project )

#include <stdio.h>

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void print_board() {
    printf("\n\n\tTic Tac Toe\n\n");
    printf("  %c | %c | %c \n", board[1], board[2], board[3]);
    printf(" ----|----|----\n");
    printf("  %c | %c | %c \n", board[4], board[5], board[6]);
    printf(" ----|----|----\n");
    printf("  %c | %c | %c \n", board[7], board[8], board[9]);
}

int checkWin() {
    if (board[1] == board[2] && board[2] == board[3]) return 1;
    if (board[4] == board[5] && board[5] == board[6]) return 1;
    if (board[7] == board[8] && board[8] == board[9]) return 1;
    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;
    if (board[3] == board[6] && board[6] == board[9]) return 1;
    if (board[1] == board[5] && board[5] == board[9]) return 1;
    if (board[3] == board[5] && board[5] == board[7]) return 1;

    if (board[1] != '1' && board[2] != '2' && board[3] != '3' && 
        board[4] != '4' && board[5] != '5' && board[6] != '6' && 
        board[7] != '7' && board[8] != '8' && board[9] != '9') {
        return 0; 
    }
    
    return -1; 
}

int main() {
    char player = 'X'; 
    int choice;
    int status = -1;

    while (status == -1) {
        print_board();
        printf("Player %c, enter a number: ", player);
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 9 && board[choice] == choice + '0') {
            board[choice] = player;              
            status = checkWin();               
            if (status == -1) {
                if (player == 'X') {
                    player = 'O';
                } else {
                    player = 'X';
                }
            }
        } else {
            printf("Invalid move! Try again.\n");
        }
    }

    print_board();
    if (status == 1) {
        printf(" Player %c wins! \n", player);
    } 
    else {
        printf(" It's a draw! \n");
    }

    return 0;
}