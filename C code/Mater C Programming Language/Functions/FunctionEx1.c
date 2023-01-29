#include <stdio.h>

int big(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}

int main() {
  int z = big(10, 20);
  printf("result is %d \n", z);
  return 0;
}
