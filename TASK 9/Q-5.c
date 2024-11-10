#include <stdio.h>
#include <string.h>
    void palindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i<j) {
    if (str[i] != str[j])
	   {
    printf("Not Palindrome\n");
    return;
            }
         i++;
         j--;
        }
     printf("Palindrome\n");
}
int main() {
    char words[5][20];
    printf("Enter 5 words:\n");
    for (int i=0; i<5; i++) {
       scanf("%s", words[i]);
       }
    for (int i=0; i<5; i++) {
        printf("Word %d: %s - ", i+1, words[i]);
        palindrome(words[i]);
    }
    return 0;
}
