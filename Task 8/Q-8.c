#include <stdio.h>
int main() {
    int rows,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++) {
        for (k=1; k<=rows-i; k++) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i=rows-1; i>=1; i--) {
        for (k=1; k<=rows-i; k++) {
            printf(" ");
              }
        for (j=1; j<=i; j++) {
            printf("* ");
           }
        printf("\n");
       }
  }