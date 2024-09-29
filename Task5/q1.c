#include <stdio.h>

int main() {
    int age;
   
   printf("enter your age");
   scanf("%d", &age);
    
   if (age<0) {
   
   printf("invalid age\n");
   } else {
   
	   if (age<=12) {
	   printf("child\n");
}
   else {
   
   	if (age<=19){
   	printf("teenager\n");
	 	
	   }
   	else {
   	if (age<=54) { 
   	
   	printf("adult\n");
   }	
   else {
 printf("senior\n");
   }
   }
   }
}
   return 0;
}
