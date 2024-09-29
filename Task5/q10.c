#include<stdio.h>

   int main(){
   int number , digit,  sum=0;
    printf("Enter a number: \n");
    scanf("%d",&number);
    for
	(int i = 1;  
	 number!=0; 
	  i++)
	{
      digit = number % 10;
      sum = sum + digit;
      number = number / 10;
    }
    printf("Sum of the digit is : %d",sum);
    return 0;
}