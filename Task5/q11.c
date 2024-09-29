#include <stdio.h>
int main() {
	int num1,num2,num3;
	
	printf("Enter three numbers:");
	scanf("%d %d %d", &num1,&num2,&num3);
	
	if (num1>num2)
	if (num1>num3) {
		printf("Number 1 is greater.");
		}else if (num2>num1 && num2>num3) {
		
        printf("Number 2 is greater.");
        }else {
		
        printf("Number 3 is greater.");
    }
        return 0;
	
	
	
	
	
	
	
	
}