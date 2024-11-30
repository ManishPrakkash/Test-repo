#include <stdio.h>

int main() {
    int n=6;
   for(int i=0;i<5;i++)
   {
   for(int j=5;j>i;j--)
   {
       printf("%d\t",n+i-j);
   }printf("\n");
   }
    return 0;
}