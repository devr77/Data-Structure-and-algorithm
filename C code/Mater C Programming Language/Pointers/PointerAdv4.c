#include <stdio.h>


void copy(void * dest, const void * src, int size) {
  int i;
  for (i = 0; i < size; i++) {
    *((char *)dest + i) = *((char *)src + i);
  }
}

int main() {
  int a = 10, b;
  double x = 20.2, y;
  copy (&b, &a, sizeof(int));
  copy (&y, &x, sizeof(double));
  printf("%d \n", b);
  printf("%lf \n", y);
  return 0;
}
