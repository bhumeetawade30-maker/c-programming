#include<stdio.h>
int main()
{
   int num[10],i,a=0;
   printf("Enter 10 Numbers:\n");

   for( int i=0;i<10;i++)
   {
   scanf("%d",&num[i]);
   }

   for(i=0;i<10;i++)
   {
   if(num[i]%2==0)
       {
   a+=num[i];

   }
   else
   {
   printf("\nInvalid number!");
   }

   }

   printf("\nSum of Even:%d",a);
   return 0;

}
