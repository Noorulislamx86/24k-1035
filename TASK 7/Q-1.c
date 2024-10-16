#include <stdio.h>
int main () {
	int n,sum=0;
	printf("Enter the number of elements of array:\n");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements of array:\n");
	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);		
	}
	for (int i=0; i<n; i++) {
		sum += arr[i];
}
	printf("Sum of the elements = %d", sum);
    return 0;	
}