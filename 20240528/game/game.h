#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void memu();
void game();
void init_board(char board[ROW][COL], int rows,
                int cols); // Initialize checkerboard
void print_board(char board[ROW][COL], int rows,
                 int cols); // the func of print board
void player_mv(char board[ROW][COL], int row, int col);
void compter_mv(char board[ROW][COL], int row, int col);
