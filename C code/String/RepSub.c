#include<stdio.h>

void swap(char,char);

int main()
{
   char a[10],b[20];
   printf("Enter the value of a and b \n");
   scanf("%s%s",a,b);
   // gets(a,b);
   printf("Before swapping value of a is %s and b is %s\n",a,b);
   swap(a,b);
   return 0;
}




void swap(char x,char y)	
{
	char  temp;
	temp=x;
	x=y;
	y=temp;

	printf("After Swapping Value of a is %s and b is %s",x,y);
}