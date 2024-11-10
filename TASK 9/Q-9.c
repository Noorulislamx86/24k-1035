#include <stdio.h>

void reverse_string()  {
	int size=0;
    int l=0;
    char str[50];
    puts("Enter a string: ");
    gets(str);
    while (str[l] !='\0')
    {
       size++;
       l++;
    }
    for (int i=0, j=size-1; i<=j; i++, j--)  {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string is: ");
    puts(str);
    return;
}
    int main()  {
    reverse_string();
    return 0;
}