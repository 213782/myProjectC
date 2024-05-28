#include "game.h"

void memu() {
  printf("****************************\n");
  printf("**** 1 play   0 exit *******\n");
  printf("****************************\n");
}
void init_board(char board[ROW][COL], int rows, int clos) {
  for (int i = 0; i < rows; i++) {
    for (int y = 0; y < clos; y++) {
      board[i][y] = ' ';
    }
  }
}
void print_board(char board[ROW][COL], int rows, int clos) {
  for (int i = 0; i < rows; i++) {
    for (int y = 0; y < clos; y++) {
      printf(" %c ", board[i][y]);
      if (y < clos - 1)
        printf("|");
    }
    printf("\n");
    if (i < rows - 1) {
      for (int y = 0; y < clos; y++) {
        printf("---");
        if (y < clos - 1) {
          printf("|");
        }
      }
    }
    printf("\n");
  }
}
void player_mv(char board[ROW][COL], int row, int col) {
  do {
    printf("please player input\n");
    scanf("%d %d", &row, &col);
    if (row >= 1 && row <= ROW && col >= 1 && col <= COL) {
      if (board[row - 1][col - 1] == ' ') {
        board[row - 1][col - 1] = '*';
        break;
      } else {
        printf("the location is already used!\n");
      }
    } else {
      printf("Input error,please try again\n");
    }
  } while (1);
}
void game() {
  char board[ROW][COL] = {0};
  init_board(board, ROW, COL);
  print_board(board, ROW, COL);
  int raw = 0;
  int col = 0;
  while (1) {
    player_mv(board, raw, col);
    print_board(board, ROW, COL);
  }
}
