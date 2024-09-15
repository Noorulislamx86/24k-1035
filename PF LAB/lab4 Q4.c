#include<stdio.h>

int main(){
    int shopping_amount;
    int saved_amount;
    int Discount_amount;
    printf("Enter your shopping amount : ");
    scanf("%d",&shopping_amount);
    if(shopping_amount < 2000){
        saved_amount = shopping_amount * 0.05;
        Discount_amount = shopping_amount - saved_amount;
        printf("The saved amount is %d\n",saved_amount);
        printf("The amount after discount is %d\n",Discount_amount);
    }else if (shopping_amount >= 2000 && shopping_amount < 4000)
    {
        Discount_amount = shopping_amount*0.1;
        saved_amount = shopping_amount-Discount_amount;
        printf("The saved amount is: %d\n",saved_amount);
        printf("The amount after discount is %d\n",Discount_amount);
    }else if (shopping_amount >= 4000 && shopping_amount <= 6000)
    {
        saved_amount = shopping_amount*0.2;
        Discount_amount = shopping_amount-saved_amount;
        printf("The saved amount is: %d\n",saved_amount);
        printf("The amount after discount is %d\n",Discount_amount);
    }else if (shopping_amount > 6000)
    {
        saved_amount = shopping_amount*0.35;
        Discount_amount = shopping_amount-saved_amount;
        printf("The saved amount is : %d\n",saved_amount);
        printf("The discount amount is %d\n",Discount_amount);
    }else
        printf("Invalid amount");    
    return 0;
}