#include <stdio.h>
int main() {
  char cr = 73;
  printf("%c", cr);
  while ((cr = getchar()) != EOF) {
    cr = cr;
    printf("%c", cr);
  }
  return 0;
}
