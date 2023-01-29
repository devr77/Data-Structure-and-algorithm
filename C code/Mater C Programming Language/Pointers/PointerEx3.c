#include <stdio.h>

void change(int *p) {
  *p = *p + 5;
}

int main() {
  int a = 5;
  change(&a);
  printf("a is %d \n", a);
  return 0;
}
