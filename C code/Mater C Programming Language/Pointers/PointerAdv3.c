#include <stdio.h>

int main() {
  double a[] = {10, 20, 30};
  double * p = a;
  printf("%lf \n", *(p+0));
  printf("%lf \n", *(p+1));
  printf("%lf \n", *(p+2));

  printf("%lf \n", p[0]);
  printf("%lf \n", p[1]);
  printf("%lf \n", p[2]);
  return 0;
}
