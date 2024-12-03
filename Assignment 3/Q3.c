#include <stdio.h>
#include <string.h>

int validateEmails(char email[]) {
    int atcount = 0;
	int dotcount = 0;
    int i;

    if (strlen(email) == 0) {
        return 0; 
    }

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            atcount++;
        }
        if (atcount == 1 && email[i] == '.') {
            dotcount++;
        }
    }

    if (atcount == 1 && dotcount > 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char email[50]; 

    printf("Enter an email address: ");
    scanf("%s", email);

    if (validateEmails(email)) {
        printf("Valid Email\n");
    } else {
        printf("Invalid Email\n");
    }

    return 0;
}
