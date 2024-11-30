#include<stdio.h>

int main(){
    int mark;
    
    while(1){
        printf("Enter your mark:");
        scanf("%d",&mark);
        if(mark<60)
           continue;
            else{
             printf("You pass\n\n");
        }
    }
    return 0;
}
