#include <stdio.h>
#include <math.h>

int prime(int x) {
  int isprime = 1, i;

  i = 2;
  while (i <= sqrt(x)) {
    if (x % i == 0) {
      isprime = 0;
      break;
    }
    i++;
  }

  if (isprime == 1) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int range, i;

  printf("Enter the range");
  scanf("%d", &range);

  for (i = 2; i <= range; i++) {
    if ( prime(i) == 1 ) {
      printf(" %d ", i);
    }
  }
  
  return 0;
}
