#include "game.h"

int main(void) {
  int input = 0;
  int flag = 1;
  do {
    memu();
    printf("please enter your chooce for begin game\n");
    scanf("%d", &input);
    switch (input) {
    case 1:
      printf("begin the game\n");
      game();
      break;
    case 0:
      printf("game over\n");
      flag = 0;
      break;
    default:
      printf("the enter is erroe\n");
      break;
    }

  } while (flag);
  return 0;
}
