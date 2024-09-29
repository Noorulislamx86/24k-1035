#include <stdio.h>

int main()  {
	
    int num,
	count =0;
	
    printf("Enter a number :\n");
    scanf("%d", &num);
    while (num != 0)
    {
        count += num & 1;
        num=num>> 1; 
     }
    printf("The number of 1's is %d",count);
    return 0;    


}