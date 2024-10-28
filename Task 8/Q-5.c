#include <stdio.h>

int main() 
{
    int number, i, j;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i=number; i>=1; i-=2) {
        for (j=1; j<=i; j++) {
            printf("%d ", i);
            
        }
        printf("\n");
          }

    return 0;
    }