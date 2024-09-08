#include <stdio.h>


int main() {

    
    int a, b, temp;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter b number:\n");
    scanf("%d", &b);
    temp =a;
    a=b;
    b = temp;
    printf("A = %d\n", a);
    printf("B= %d\n", b); 

    return 0;
}
