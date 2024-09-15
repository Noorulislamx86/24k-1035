#include<stdio.h>

int main(){
    int k;
    printf("Enter your number:");
    scanf("%d",&k);
    if( k == 1){
        printf("one for %d\n",k);
    }else if(k == 2){
        printf("two for %d\n",k);
    }else if(k == 3){
        printf("three for %d\n",k);
    }else if(k == 4){
        printf("four for %d\n",k);
    }else if(k == 5){
        printf("five for %d\n",k);
    }else if(k == 6){
        printf("six for %d\n",k);
    }else if(k == 7){
        printf("seven for %d\n",k);
    }else if(k == 8){
        printf("eight for %d\n",k);
    }else if(k == 9){
        printf("nine for %d\n",k);
    }else 
        printf("greater than 9\n",k);    
    return 0;    
}