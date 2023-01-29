
#include <stdio.h>

int main() {
  int n, sum;

  printf("Enter n");
  scanf("%d", &n);

  while (n > 0) {
    sum = 0;
    while ( n > 0 ) {
      sum = sum + (n % 10);
      n = n / 10;
    }
    if (sum > 9) {
      n = sum;
    }
  }

  printf("sum of digits up to single digit %d \n", sum);
  return 0;
}
