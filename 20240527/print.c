#include <stdio.h>

int main() {
  double count = 0;
  int flag = 1;
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      flag = -1;
      count += flag * (1.0 / i);
    } else if (i % 2 != 0) {
      flag = 1;
      count += flag * (1.0 / i);
    }
  }
  printf("%lf\n", count);
  return 0;
}
