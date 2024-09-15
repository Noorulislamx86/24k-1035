#include<stdio.h>

int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    if(num % 3 == 0){
        printf("multiple of 3");
    }else 
        printf("Not a multiple of 3");
    return 0;    
}