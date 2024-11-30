#include<stdio.h>

int main(){
    int act_bal,wd_amt;
   printf("BANKING SYSTEM\n");
   printf("Enter account balance:");
   scanf("%d",&act_bal);
   while(1){
     printf("\nWithdrawal Amount:");
     scanf("%d",&wd_amt);
     if(act_bal>wd_amt){
        act_bal-=wd_amt;
        printf("Account balance:%d",act_bal);
     }
     else{
        printf("Insufficient balance");
        break;
     }
   }
   return 0;
}