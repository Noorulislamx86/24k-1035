#include <stdio.h>

int main() {
	
 int number;
 printf("enter a number:");
 scanf("%d", &number);
 
 if (number>0) {
  printf("The number is positive\n");
  
 if (number%2==0) {
 
 
 printf("the number is even\n");
}
 
 else {
 
 printf("the number is odd\n");
} 
}
 else if (number<0) {
 
 printf("the number is negative\n");
} 
 else {
 
 printf("the number is zero\n");
}

 return 0;	

}


