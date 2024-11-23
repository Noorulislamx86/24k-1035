#include <stdio.h>
#include <string.h>
void rs(char str[], int i, int l) {
    if (i>=l/2)  return;
    char temp = str[i];
    str[i] = str[l-i-1];
    str[l-i-1] = temp;
    rs(str,i+1,l);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str,"\n")] ='\0';
    int l = strlen(str);
    rs(str, 0, l);
    printf("Reversed string: %s\n", str);
    return 0;
}

