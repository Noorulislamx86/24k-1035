#include <stdio.h>

int main() {
    int matrix[3][3], i, j, rowmin, colmax;

    printf("Enter the elements of the matrix:");
    for (i=0; i<3; i++) {
   for (j=0; j<3; j++) {
   scanf("%d", &matrix[i][j]);
    }
    }
    printf("Saddle points in the matrix: ");
    for (i=0; i<3; i++) {
        rowmin=matrix[i][0];
        colmax=matrix[0][i];

        for (j=1; j<3; j++)  {
            if (matrix[i][j]<rowmin)
			 {
                rowmin=matrix[i][j];
           }
        }
            if (matrix[j][i]>colmax) {
                colmax=matrix[j][i];
            }
        if (rowmin==colmax) {
            printf("%d at (%d, %d)\n", rowmin, i, i);
        }
    }

    return 0;
}