#include <stdio.h>
struct Stu {
  int age;
  char name[20];
  char sex[10];
};
int main() {
  struct Stu s = {20, "ssss", "男"};
  printf("%d %s %s\n", s.age, s.name, s.sex);
  return 0;
}
