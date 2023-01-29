#include<stdio.h>

void swap(int*,int*);

int main()
{
   int a,b;
   printf("Enter the value of a and b \n");
   scanf("%d%d",&a,&b);
   printf("Before swapping value of a is %d and b is %d\n",a,b);
   swap(&a,&b);
   return 0;
}




void swap(int *x , int *y)	
{

   int temp;

   temp = *x; 
   *x = *y;    
   *y = temp;

	printf("After Swapping Value of a is %d and b is %d",*x,*y);
}