#include <stdio.h>
#define max 12
int main() {
	int rows,columns;
	int arr[max][max], transpose[max][max];
	printf("Enter the no of rows and columns: ");
	scanf("%d %d", &rows, &columns);
	printf("Enter the elements of the array: ");
	for (int i=0; i<rows; i++) {
		for (int j=0; j<columns; j++) {
			scanf("%d", &arr[i][j]);
		}
		
	}
	for (int i=0; i<rows; i++) {
		for (int j=0; j<columns; j++) {
			transpose [j][i] = arr[i][j];
			
		}
	}
	printf("Transpose of the array: ");
	for (int i=0; i<columns; i++) {
		for (int j=0; j<rows; j++) {
			printf("%d ",transpose[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
