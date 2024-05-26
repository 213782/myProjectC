#include <stdio.h>

void func(void *p_num1, void *p_num2, int type) {
  // 这里只做int类型的了

  *(int *)p_num1 = *(int *)p_num1 ^ *(int *)p_num2;
  *(int *)p_num2 = *(int *)p_num1 ^ *(int *)p_num2;
  *(int *)p_num1 = *(int *)p_num1 ^ *(int *)p_num2;
}

int main() {
  int num = 10;
  int num2 = 11;
  func(&num, &num2, 1);
  printf("num为%d num2为%d", num, num2);
  return 0;
}
