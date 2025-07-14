//Done by Sharvesh on 14.09.2025

#include <stdio.h>

void main()
{
   int i,n,fact=1;
   printf("Enter the value of n:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   printf("%d",fact);
   
}