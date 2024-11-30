#include<stdio.h>

int main(){
    int weight;
    
    while(1){
        printf("Enter the weight of the product:");
        scanf("%d",&weight);
        if(weight<100)
            continue;
            else{
              printf("Good quality\n\n");
        }
    }
    return 0;
}
