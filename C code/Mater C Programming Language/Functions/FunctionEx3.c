#include <stdio.h>

int prime(int x) {
  int count = 0, i;

  i = 1;
  while (i <= x) {
    if (x % i == 0) {
      count++;
    }
    i++;
  }

  if (count == 2) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n, result;

  printf("Enter n");
  scanf("%d", &n);

  result = prime(n);

  if (result == 1) {
    printf("%d is prime \n", n);
  } else {
    printf("%d is not prime \n", n);
  }

  return 0;
}
