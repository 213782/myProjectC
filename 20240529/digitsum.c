#include <stdio.h>
int digit_sum(int num) {
  if (num % 10 > 0) {
    return num % 10 + digit_sum(num / 10);
  }
  return num;
}
int main() {
  int num = 1729;
  int sum = digit_sum(num);
  printf("%d\n", sum);
  return 0;
}
