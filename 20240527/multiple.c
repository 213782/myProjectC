#include <stdio.h>
// the first method
void func(int num) {
  for (int i = 1; i <= num; i++) {
    if (i % 3 == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  int num = 100;
  func(num);
  // the second method
  for (int i = 3; i <= 100; i += 3) {
    printf("%d ", i);
  }
  return 0;
}
