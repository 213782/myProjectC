#include <stdio.h>
#include <string.h>
void func(char *p) {
  char tmp = *p;
  int len = strlen(p);
  *p = *(p + len - 1);
  *(p + len - 1) = '\0';
  if (strlen(p + 1) >= 2) {
    func(p + 1);
  }
  *(p + len - 1) = tmp;
}
int main() {
  char cr[] = "abcdefg";
  func(cr);
  printf("%s", cr);
  return 0;
}
