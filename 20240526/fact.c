#include <stdio.h>
int func(int num) {
  int i = 0;
  int y = 0;
  int res = 1;
  for (i = 1; i <= num; i++) {
    res *= i;
  }
  return res;
}
int main() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += func(i);
  }
  printf("%d\n", sum);
  return 0;
}
