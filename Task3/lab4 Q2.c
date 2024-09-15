#include<stdio.h>

int main(){
    int num_1;
    int num_2;
    int result;
    char oper;
    printf("Enter your first number : ");
    scanf("%d",&num_1);
    printf("Enter your second number : ");
    scanf("%d",&num_2);
    printf("Enter your operator (+,-,*,/) : ");
    scanf(" %c",&oper);
    switch (oper)
    {
    case '+':
        result = num_1 + num_2;
        printf("The sum of two numbers is = %d",result);
        break;
    case '-':
        result = num_1-num_2;
        printf("The subtract of two numbers is = %d",result);
        break;
     case '*':
        result = num_1 * num_2;
        printf("The Multiply of two numbers is = %d",result);
        break;
    case '/':
        if (num_2 != 0) {
            result = num_1 / num_2;
            printf("The division of the two numbers is = %d", result);
        }else {
            printf("Division by zero is not allowed.");
        }
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}

