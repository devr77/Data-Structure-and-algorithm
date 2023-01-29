#include<stdio.h>

void  main()
{
	int i,j,k;
	int height =5;
	for(k=1;k<=height;k++)
	{
	  for (i=height-1;i>=k;i--)
	  {
		printf("");
	  }
	  for (j=1;j<=k;j++)
	  {
		printf("* ");
	  }
	    printf("\n");
   }
}
