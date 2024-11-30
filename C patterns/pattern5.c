#include<stdio.h>

void main() {
   int k=65;
   for(int i=1;i<=5;i++)
   {
   for(int j=1;j<=i;j++)
   {
       printf("%c\t",k++);
   }printf("\n");
   }
 
}