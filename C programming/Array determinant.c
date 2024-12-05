#include <stdio.h>
//array determinant
int main() {
int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
int sum=0;
scanf("%d%d",&r1,&c1);
scanf("%d %d",&r2,&c2);
if(r2==c2){
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<r2;i++)
      {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
         for(i=0;i<r2;i++)
      {
        for(j=0;j<c2;j++)
        {
            int sum=0;
            for(k=0;k<r1;k++)
            {
            sum+=a[i][k]*b[k][j];
            }
            printf("%d ",sum);
        }printf("\n");
    }
}
    return 0;
}