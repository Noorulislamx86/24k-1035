#include <stdio.h>
#include<string.h>
int main()  {  
	int p;
char source[30];
    printf("Enter source string: ");
    gets(source);
char destination[30];
    printf("Enter destination string: ");
    gets(destination);
	    
    printf("Enter a number: ");
    scanf("%d",&p);
    strncat(destination, source, p);
    puts(destination);
    
    return 0 ;
}