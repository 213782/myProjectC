#include <stdio.h>

int main() {
  for (int i = 0; i < 6; i++) {
    for (int y = 0; y < 12; y++) {
      if (i <= 1 && (y == 6 || y == 7)) {
        printf("*");
      } else if (i == 2 || i == 3) {
        printf("*");
      } else if (i > 3 && (y == 5 || y == 8)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
