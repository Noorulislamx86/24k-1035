#include<stdio.h>
#define MAX_TEMP 37.0
void CT(float temperature){
    static int exceedlimit = 0;
    if(temperature > MAX_TEMP){
        exceedlimit++;
        printf("%.1fC exceed the max limit.\n", temperature);
        printf("Number of exceeded limits so far are: %d\n", exceedlimit);
    }else{
        printf("%.1fC is within the limit.\n",temperature);
    }
}
int main(){
    float temperature;
    char choice;
    do{
       printf("Enter the temperature in Celsius: ");
        scanf("%f",&temperature);
        CT(temperature);
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c",&choice);
    }
	while(choice=='y' || choice=='Y');
    printf("Temperature check completed\n");
    return 0;    
}










