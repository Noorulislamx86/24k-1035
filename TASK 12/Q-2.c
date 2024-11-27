#include <stdio.h>
#include <stdlib.h>

void matrix_multiplication(int **A, int **B, int **C, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            }
           }
        }
int main() {
    int m, n, p;
    printf("Enter the 1  dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);

    int **A = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter the elements of the first matrix:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &n, &p);

    int **B = (int **)malloc(n * sizeof(int *));
    for (int i=0; i<n; i++) {
        B[i] = (int *)malloc(p * sizeof(int));
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    int **C = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i++) {
        C[i] = (int *)malloc(p * sizeof(int));
    }

    matrix_multiplication(A, B, C, m, n, p);

    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < n; i++) {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < m; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}