#include <stdio.h>

int main() {
    int sum;
    sum=0;
    int num;
    printf("Enter a number :\n");
    
    while(num!=0){
    	scanf("%d", &num);
    	printf("the number is %d\n", num);
    	sum = sum+num;
    	printf("the sum is :%d\n", sum);
    }
	return 0;
    	
    	
	
    




}
