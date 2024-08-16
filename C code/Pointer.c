#include<stdio.h>
int main()
{
int a=10;//initializing normal variable
int *p;//declaring pointer variable
p=&a;//address of variable a is assigned to p
printf("value of a=%d\n",a);
printf("address of a=%d\n",&a);
printf("value of p=%d\n",p);
printf("address of p=%d\n",&p);
printf("value of *p=%d\n",*p);
}

### Output ###
value of a=10
address of a=8284
value of p=8284
address of p=8288
value of *p=10