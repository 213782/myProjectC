#include <stdio.h>

int main() {
  for (int i = 9; i <= 100; i++) {
    // determine if the ones place is 9
    if (i % 10 == 9) {
      printf("%d ", i);
    }
    // determine if the tens place is 9
    else if (i / 10 == 9) {
      printf("%d ", i);
    }
  }
  return 0;
}
