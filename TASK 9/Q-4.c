#include<stdio.h>
#include<string.h>
int main(){
    int r;
    printf("Enter the number of words in the array: ");
    scanf("%d", &r);  
char words[r][170];
    for (int i=0; i<r; i++){
        printf("Enter the word %d: ", i+1);
        scanf("%s", words[i]);  
    }
    char input[170];  
    printf("Enter the word to search: ");
    scanf("%s", input); 
    int found = 0;
    for (int i=0; i<r; i++){
        if (strcmp(words[i],  input) == 0){ 
            printf("Found\n");
            found = 1;  
            break;
             }
             }   
        if  (!found) 
	{ 
        printf("Not Found\n");
     }
    return 0;
}
