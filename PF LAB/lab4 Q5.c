#include<stdio.h>

int main(){
    float a = 16.20;
    float b = 20.10;
    float c = 27.10;
    float d = 35.90;
    int customer_id;
    char name;
    int unit_consumed;
    float amount_charges;
    float surcharge_amount = 0.0;
    float total_amount;
    printf("Customer Id: ");
    scanf("%d",&customer_id);
    printf("Customer Name: ");
    scanf(" %s",&name);
    printf("Units Consumed: ");
    scanf("%d",&unit_consumed);
    if(unit_consumed <= 199){
        amount_charges = unit_consumed*a;
        printf("Amount charges @%.2f per unit %.1f\n",a,amount_charges);
    }else if(unit_consumed >= 200 && unit_consumed < 300){
        amount_charges = unit_consumed*b;
        printf("Amount charges @%.2f per unit %.1f\n",b,amount_charges);
    }else if(unit_consumed >= 300 && unit_consumed < 500){
        amount_charges = unit_consumed*c;
        printf("Amount charges @%.2f per unit %.1f\n",c,amount_charges);
    }else if (unit_consumed >= 500){
        amount_charges = unit_consumed*d;
        printf("Amount charges @%.2f per unit %.1f\n",d,amount_charges);
        if(amount_charges >= 18000){
            surcharge_amount = amount_charges*0.15;
            printf("Surcharge Amount: %.1f\n",surcharge_amount);
        }else {
            printf("Surcharge Amount is not applied");
        }
    }
    total_amount= amount_charges+surcharge_amount;
    printf("Net Amount Paid by the Customer:%.2f",total_amount);
    return 0;
}