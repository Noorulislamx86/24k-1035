#include <stdio.h>
int main () {
	int n;
	printf("Enter the number of elements of array:\n");
	scanf("%d", &n);	
	int arr[n];
	printf("Enter the elements of array:\n");
	for (int i=0; i<n; i++) {
	scanf("%d", &arr[i]);		
	}		printf("Elements in reverse order:\n");
	for (int i=n-1; i>=0; i--) {
	printf("%d", arr[i]);
}
    printf("\n");

    return 0;	
}