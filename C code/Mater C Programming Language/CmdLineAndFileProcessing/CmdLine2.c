
/* Command line arguments demo
   Find the sum of the arguments passed through the command line 
   e.g.
   Input:  sum 10 20 30
   Output: Added result is 60
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int i;
  int sum = 0;

  for(i = 1; i < argc; i++) {
      sum += atoi(argv[i]);
  }

  printf("Added result is %d \n", sum);

  return 0;
}