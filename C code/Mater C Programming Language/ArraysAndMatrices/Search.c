#include <stdio.h>
#include <stdlib.h>

void read(int * b, int n) {
  int i;
  printf("Enter %d values ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
}

/* Returns the index of the ele when it is found
   otherwise -1 */
int search(int * b, int n, int ele) {
  int i;
  for (i = 0; i < n; i++) {
    if (b[i] == ele) {
      return i;
    }
  }
  return -1;
}

int main() {
  int * a;
  int ele, index, n;

  printf("Enter the number of elements ");
  scanf("%d", &n);

  // allocate n integers.
  a = (int *)malloc( n * sizeof(int));

  read(a, n);

  printf("Enter element to search");
  scanf("%d", &ele);

  index = search(a, n, ele);

  if (index == -1) {
    printf("NOT FOUND \n");
  } else {
    printf("FOUND AT %d \n", index);
  }

  return 0;
}
