#include <stdio.h>

int main() {

  char cr[10] = {0};
  double score_chi = 0;
  double score_manth = 0;
  double score_eng = 0;
  printf("please enter your Student ID:");
  scanf("%s", cr);
  printf("please enter your grades for each subject:");
  scanf("%lf %lf %lf", &score_chi, &score_manth, &score_eng);
  printf("your grades of chinese is:%.2lf", score_chi);
  printf("your grades of manth is:%.2lf", score_manth);
  printf("your grades of english is:%.2lf", score_eng);
  return 0;
}
