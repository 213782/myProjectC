#include <stdio.h>

void func(const void *p_arr,
          int type) { // 0为char类型  1为整数类型  2为float类型
  if (!type) {
    printf("%c\n", *(const char *)p_arr);
  } else if (type == 1) {
    printf("%d\n", *(const int *)p_arr);
  } else if (type == 2) {
    printf("%g\n", *(const float *)p_arr);
  }
}

int main() {
  int num = 10;
  char cr = 'a';
  float fla = 6.1f;
  func(&num, 1);
  return 0;
}
