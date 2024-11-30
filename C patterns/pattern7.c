//parallelogram
#include <stdio.h>

int main() {
    int n,s;
    printf("Enter no of times:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++)
   {
       for(s=0;s<=n-i;s++)
       {
           printf(" ");
       }
          for(int j=0;j<=n-1;j++)
           {
             printf("* ");
           }
 printf("\n");
   }
    return 0;
}