#include <stdio.h>

int main() {
  double arr[5];
  int i;
  double big;

  printf("Enter 5 values ");
  for (i = 0; i < 5; i++ ) {
    scanf("%lf", &arr[i]);
  }

  big = arr[0];
  for (i = 1; i < 5; i++) {
    if ( arr[i] > big ) {
      big = arr[i];
    }
  }

  printf("biggest element is %lf \n", big);
  return 0;
}
