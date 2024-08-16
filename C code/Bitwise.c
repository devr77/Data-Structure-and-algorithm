#include <stdio.h>

int main()
{
    // And Operator
    /*
    printf("%d\n",1&1); //1
    printf("%d\n",1&0); //0
    printf("%d\n",0&1); //0
    printf("%d\n",0&0); //0
    */

    // Or Operator
     /*
    printf("%d\n",1|1); //1
    printf("%d\n",1|0); //1
    printf("%d\n",0|1); //1
    printf("%d\n",0|0); //0
    */


    //if both side same  then it will be 0 (Exclusive Or)
    /*
    printf("%d\n",1^1); //0
    printf("%d\n",1^0); //1
    printf("%d\n",0^1); //1
    printf("%d\n",0^0); //0
    */

    /*
    printf("%d\n",2&2); //2
    printf("%d\n",2&5); //0
    */

    /*
    printf("%d\n",2|2); //2
    printf("%d\n",2|5); //7
    */

   // Bitwise Complement (~) add 1 and change its sign
   //printf("%d\n",~2); //-3

   // Bitwise Left Shift Operator
   /*
    printf("%d\n",1<<4); //16
    printf("%d\n",5<<2); //20
   */

   // Bitwise Right Shift Operator
    printf("%d\n",1>>4); //0
    printf("%d\n",5>>2); //1

    return 0;
}
