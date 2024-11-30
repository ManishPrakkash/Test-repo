#include<stdio.h>
#include<string.h>

int main(){
    char email[50];
    while(1){
        printf("Enter your Email:");
        scanf("%s",&email);
        if(strstr(email,"@gmail.com")==0){
             printf("Contains Invalid domain\n\n");
            continue;
        }
        else{
            printf("correct credential\n\n");
        }
        
    }
    return 0;
}