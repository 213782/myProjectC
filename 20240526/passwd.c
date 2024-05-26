#include <stdio.h>
#include <string.h>

int main() {
  int num = 0;
  char passwd[] = "123456";
  char passwd_enter[20] = {0};
  while (num < 3) {
    printf("please enter your password :");
    scanf("%s", passwd_enter);
    if (strcmp(passwd, passwd_enter) == 0) {
      printf("the entered password is correct\n");
      break;
    } else {
      printf("the entered password is incorrect\n");
      num++;
    }
  }

  return 0;
}
