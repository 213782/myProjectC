#include <stdio.h>
int max(int num1, int num2, int num3, int num4) {
  int max_num = num1 > num2 ? num1 : num2;
  max_num = max_num > num3 ? max_num : num3;
  max_num = max_num > num4 ? max_num : num4;
  return max_num;
}
int main() {
  int num1 = 1;
  int num2 = 2;
  int num3 = 3;
  int num4 = 4;
  int max_num = max(num1, num2, num3, num4);
  printf("The largest number is:%d\n", max_num);

  return 0;
}
