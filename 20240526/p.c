#include <stdio.h>

int main() {
  char s = 'A';
  char *p_s = &s;
  printf("%zu", sizeof(p_s));

  return 0;
}
