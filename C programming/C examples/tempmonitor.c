#include<stdio.h>

int main(){
   float temp;
   while(1){
      printf("Enter the temperature:");
      scanf("%f",&temp);
      if(temp<100)
       printf("current temperature:%.1f\n\n",temp);
       else{
            printf("current temperature:%.1f\n\n",temp);
       break;
       }
   }
   return 0;
   }