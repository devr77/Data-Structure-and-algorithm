/* Conditional compilation */
#include <stdio.h>

#define MAXVALUE 20

#ifdef MAXVALUE
   int limit = MAXVALUE;
#else
   int limit = 10;
#endif

int main() {
   printf("limit is %d \n", limit);
   
   return 0;
}
