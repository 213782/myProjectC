#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(0));
  int randm_num = rand() % 100 + 1;
  int guess_num = 0;
  printf("please enter your guess");
  scanf("%d", &guess_num);
  while (1) {
    if (guess_num < randm_num) {
      printf("your guess number is a little smaller\n");
    } else if (guess_num > randm_num) {
      printf("your guess number is a little bigger\n");
    } else {
      printf("your guess number is right,you win\n");
      break;
    }
    printf("please enter your guess number again\n");
    scanf("%d", &guess_num);
  }
  return 0;
}
