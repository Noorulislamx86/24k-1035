#include <stdio.h>
int main() {
 int number;
 
 printf("enter a number: ");
 scanf("%d", &number);
 
 int result=(number>0)? printf("the number is positive") : (number<0)? printf("the number is negative") : printf("number is zero");
 
 return 0;	
	
	
}