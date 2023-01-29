#include <stdio.h>

int main() {
  int a = 10;
  double b = 20.2;
  void * p = &a; // valid
  *(int *)p = 99;
  p = &b; // valid
  *(double *)p = 99.99;
  printf("\n %d \n", a);
  printf("\n %lf \n", b);
  return 0;
}
