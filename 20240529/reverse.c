#include <stdio.h>
#include <string.h>
void func(char *p) {
  if (p[0] != '\0') {
    func(p + 1);
  }
  printf("%c", *p);
}
int main() {
  char cr[] = "abcdefg";
  int sz = strlen(cr);
  func(cr);
  return 0;
}
