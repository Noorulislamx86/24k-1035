#include <stdio.h>
int isprime() {	
    int n, i, is_a_Prime=1;
    printf("enter a number: ");
    scanf("%d",&n);
    if (n<=1)  {
        is_a_Prime=0;
    }
    for (i=2; i<=n/2; i++) {
        if (n%i== 0)  { 
            is_a_Prime=0;
            break;
        }
        }
    if (is_a_Prime) {
        printf("Prime number\n",n);
    }  else  {
        printf("Not a prime number\n",n);
       }
      return 0;
}
int main()  {
    isprime();
    return 0;
}