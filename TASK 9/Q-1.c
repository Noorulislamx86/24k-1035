#include<stdio.h>
int product(int n1,int n2)  {
    int k=n1*n2;
    return k;
}
     int main() { 
     int n1;
     int n2;
    printf("enter first number: ");
    scanf("%d",&n1);
    printf("enter second number: ");
    scanf("%d",&n2);
    int k=product(n1,n2);
    printf("The product of is: %d", k);
}