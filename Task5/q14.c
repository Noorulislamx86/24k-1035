#include <stdio.h>

int main() {
    int age;
    int income;
    int creditScore;

     
     printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%d", &income);

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    
    if(age >= 18 && income >= 4000 && creditScore >= 700)   {
        printf("You are eligible for the loan.\n");
    } else 
    {
        printf("You are not eligible for the loan.\n");
        
        
        if (age < 18) 
		{
            printf("Reason: You must be at least 18 years old.\n");
        }
        if (income < 4000) {
            printf("Reason: Your income must be at least $4,000 per month.\n");
         }
        if (creditScore < 700) {
            printf("Reason: Your credit score must be at least 700.\n");
    }
    }

    return 0;
}
