#include <stdio.h>
int main ()  {
int n,i,j;
printf("enter the number of lines: ");
scanf("%d", &n);
 for (i=0; i<n; i++) {
 	for (j =1; j<=i+1; j++){
	 
 	printf("%d", j);
 }
 printf("\n");	
}

	return 0;
}