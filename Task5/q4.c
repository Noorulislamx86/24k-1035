#include <stdio.h>

int main() {
	int age;
	char citizenship;
	
	printf("enter your age: ");
	scanf("%d", &age);
	
	printf("are you a citizen? (z\n): ");
	scanf(" %c", &citizenship);
	if (age>=18 && (citizenship=='z' || citizenship=='Z')) {
    printf("You are eligible to vote.\n");
    } else {
    printf("You are not eligible to vote.\n");
}
    return 0;
}
	
	
	
	
	
	
	
