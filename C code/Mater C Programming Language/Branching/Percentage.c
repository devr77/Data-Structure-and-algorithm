
#include <stdio.h>

int main() {
  int obt, total;
  float per;

  printf("enter obtained marks");
  scanf("%d", &obt);

  printf("enter total marks");
  scanf("%d", &total);

  per = obt * 100.0 / total;

  printf("Percentage %f \n", per);

  return 0;
}
