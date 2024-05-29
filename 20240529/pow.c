#include <stdio.h>
int my_pow(int num, int k) {
  if (k > 1) {
    return num * my_pow(num, k - 1);
  }
  if (k == 0) {
    return 1;
  } else {
    return num;
  }
}
int main() {
  int num = 3;
  int k = 3;
  printf("%d\n", my_pow(num, k));
  return 0;
}
