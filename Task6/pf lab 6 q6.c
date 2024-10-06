#include<stdio.h>

int main()  {
    int k = 1;
    int l = 2;
    int m;
    int i;
    while (i<=8)
    {
        printf("%d\t",k);
        m = k * l;
        k = l;
        l = m;
        i++;
   
    }
    
    return 0;
    
}