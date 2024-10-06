#include <stdio.h>
int main() {
	int num;
	int y;
	y=1;

	
	while (y!=0) {
		printf("enter a number :\n");
		scanf("%d", &num);
	    y=num/10;
	if (y!=0) {
	
	printf("%d is a multiple digit number",num);
	
	}else {
	
	
	printf("%d is not a multiple digit number",num);
}

	return 0;
	
	
	
}
    
}

