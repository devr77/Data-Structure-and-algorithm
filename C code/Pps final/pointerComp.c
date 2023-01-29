//5. Wap a program to illustarte pointer comparison of different type of pointer
#include <stdio.h>

int main()
{
    int *ptrA;
    float *ptrB;
    
    ptrA = (int *)1000;
    ptrB = (float *)2000;
    
    if(ptrB > ptrA)
       printf("PtrB is greater than ptrA");
    
    return(0);
}