#include <stdio.h>

void Cal() {
    int m, n;
    char operation;
    printf("Enter First Number: ");
    scanf("%d", &m);
    printf("Enter Second Number: ");
    scanf("%d", &n);
    printf("Enter the operation from +, -, *, /: ");
    scanf(" %c", &operation);
    if (operation=='+') {
        int addition = m+n;
        printf("%d\n", addition);
    }
    else if (operation=='-')  {
        int substraction = m-n;
        printf("%d\n", substraction);
    } 
	  else if (operation=='*')
    {
        int multiplication = m*n;
        printf("%d\n", multiplication);
      }
    else
      {
        int division = m/n;
        printf("%d", division);
    }
    }
       int main()  {
    Cal();
    return 0;
}