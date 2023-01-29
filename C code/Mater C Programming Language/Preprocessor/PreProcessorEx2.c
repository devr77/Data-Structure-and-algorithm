#include <stdio.h>
#include <stdlib.h>

#define sqr(x)   ((x) * (x))

int main() {

  int n = sqr(2+5); /* int n = ((2+5) * (2+5)); */
  printf("value of n is %d \n", n);
   
  return 0;
}
