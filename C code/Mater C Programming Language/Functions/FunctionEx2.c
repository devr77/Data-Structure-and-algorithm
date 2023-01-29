#include <stdio.h>

int small(int x, int y) {
  if (x < y)
    return x;
  else
    return y;
}

int main() {
  int a, b, c;

  printf("Enter three numbers");
  scanf("%d %d %d", &a, &b, &c);

  int z = small(a, small(b, c));
  printf("result is %d \n", z);
  
  return 0;
}
