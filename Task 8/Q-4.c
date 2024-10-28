#include <stdio.h>

int main() {
    int srt, ed, i, j, isprime;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &srt, &ed);

    printf("Prime numbers between %d and %d are:\n", srt, ed);

    for (i=srt;i<=ed;i++) {
        isprime = 1; 

        for (j=2; j*j<=i;j++) {
            if (i%j == 0) {
         isprime = 0; 
         break;
        }
        }

        if (isprime)
		 {
            printf("%d ", i);
        }
    }
   printf("\n");

    return 0;
}