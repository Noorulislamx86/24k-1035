#include <stdio.h>
int main() {
	int num;
	int y;
	int number;
	y=1;
	int i;
    int a;
	a=0;
	while (y!=0) {
		printf("enter a number :\n");
		scanf("%d", &num);
	    y=num/10;
	if (y!=0) {
	
	printf("%d is a multiple digit number\n",num);
	
	}else {
	
	
	printf("%d is not a multiple digit number\n",num);
}

	for( i=1;i<=num;i++)
	{
		if(num%i==0)
	{
		a++;
		break;
	}
	}

if( a==2){
	printf("It is a prime number\n");
}
else{
	printf("It is a composite number\n");
}

}
}



