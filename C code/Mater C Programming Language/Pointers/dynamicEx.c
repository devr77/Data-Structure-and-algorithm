#include <stdio.h>
#include <stdlib.h>

int main() {
  double * p;

  // allocates memory and assigns the address to p
  p  = (double *) malloc( sizeof(double) );

  // read value into the allocated double variable
  printf("enter value ");
  scanf("%lf", p);

  // print the value
  printf("entered value %lf \n", *p);

  // release the memory
  free(p);

  return 0;
}
