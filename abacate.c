#include <stdio.h>
#include <stdbool.h>
#define BOARD_SIZE 8
// Function to initialize the board
void initBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = ' ';
            } else {
                if (i < 3) {
                    board[i][j] = 'O'; // Player O pieces
                } else if (i > 4) {
                    board[i][j] = 'X'; // Player X pieces
                } else {
                    board[i][j] = ' '; // Empty squares
                }
            }
        }
    }
}
// Function to print the board
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
    }
}
int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    initBoard(board);
    // Print initial board
    printf("Initial Board:\n");
    printBoard(board);
    // Game loop
    bool game_over = false;
    while (!game_over) {
        // Implement player moves and game logic here
        // Placeholder for demonstration purposes
        game_over = true;
    }
    return 0;
}