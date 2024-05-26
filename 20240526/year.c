#include <stdio.h>
int main() {
  char year = '\0';
  char month = 0;
  char day = 0;
  printf("please enter your date of birth\n");
  while ((year = getchar()) != EOF) {
    putchar(year);
  }
  // printf("%s",year);
  // scanf("%c %c %c", &year, &month, &year);
  // printf("your birthday is %d.%d.%d\n", year, month, day);
  return 0;
}
