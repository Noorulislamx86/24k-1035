#include <stdio.h>


int main() 
{
    float P, R, T, SI;
    printf("Enter the principal amount (between 100 Rs and 1,000,000 Rs): ");
    scanf("%f", &P);
    if (P < 100 || P > 1000000) {
        printf("Error: Principal must be between 100 Rs and 1,000,000 Rs.\n");
        return 1;
    }
    printf("Enter the rate of interest (between 5%% and 10%%): ");
    scanf("%f", &R);
    if (R < 5 || R > 10) {
        printf("Error: Rate of interest must be between 5%% and 10%%.\n");
        return 1;
    }
    printf("Enter the time period in years (between 1 and 10 years): ");
    scanf("%f", &T);
    if (T < 1 || T > 10) {
        printf("Error: Time period must be between 1 and 10 years.\n");
        return 1;
    }
    SI = (P * R * T) / 100;
    printf("The Simple Interest is: %f Rs\n", SI);
    
    return 0;
}
