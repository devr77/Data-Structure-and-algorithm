#include<stdio.h>

int main()
{
   int v,t,last,first,middle,search,arr[100];
   printf("Enter No of Element to be Searched:\n");
   scanf("%d",&t);
   printf("Enter %d value to be Searched:\n",t);
   for(v=0;v<t;v++)
      scanf("%d",&arr[v]);
   printf("Enter the value to be Searched:\n");
   scanf("%d",&search);
   first=0;
   last=t-1;
   middle=(first+last)/2;
   while(first<=last){
      if(arr[middle]<search)
         first=middle+1;
      else if(arr[middle] == search) {
         printf("Element %d found at position %d",search,middle+1);
         break;
     }

    else 
      last = middle-1;
     middle = (first+last)/2;
   }



   if(first > last)
      printf("Element doesnt Exist:\n");

   return 0;

}