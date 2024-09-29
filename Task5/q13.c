#include<stdio.h>

int main()  {
    int number;
    char ch;
    int encyption, dycryption;
    printf("Enter a number: \n");
    scanf("%d", &number);
    
    printf("Enter a character: \n");
    scanf(" %c", &ch);
    
    encyption = ch^number;
    printf("Encyption is: %d",encyption);
    
    dycryption = encyption^number;
    printf("Decryption is: %c",dycryption);
    
    
    return 0;
    
}