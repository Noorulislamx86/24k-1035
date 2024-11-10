#include <stdio.h>

    void swapInt(int m,int n ){
    printf("Enter first number m: ");
    scanf("%d", &m);
    printf("Enter second number n: ");
    scanf("%d", &n);
    printf("Before swapping m = %d , n = %d\n",m,n);
 
    m = m+n;
    n = m-n;
    m = m-n;
    printf("After swapping m = %d , n = %d",m,n);
    return;
}
    int main(){
    int y,z;
    swapInt(y,z);
    return 0 ;
}