#include <stdio.h>
int main() {
	int num1,num2;
	
	printf("enter first number: ");
	scanf("%d", &num1);
	
	printf("enter second number: ");
	scanf("%d", &num2);
	num1>num2? printf("num1 is greater"):printf("num2 is greater");
	
	return 0;
	
	
	
}