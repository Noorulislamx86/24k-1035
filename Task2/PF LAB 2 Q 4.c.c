#include <stdio.h>

int main ()
{
	int distance, fuel_price1, fuel_price2;
	float total_fuel, fuel_avg, fuel_cost1, fuel_cost2, fuel_trip, total_fuel_cost;
	
	printf("Enter the cars fuel average =\n");
	scanf("%f", & fuel_avg);
	if(fuel_avg > 0)	
	{
		fuel_price1= 118;
		fuel_price2= 123;
		distance = 1207;
		fuel_trip = distance / fuel_avg;
		fuel_cost1 = fuel_trip * fuel_price1;
		fuel_cost2 = fuel_trip * fuel_price2;
		total_fuel_cost = fuel_cost1 + fuel_cost2;
		printf("Total fuel cost = %f",total_fuel_cost);
		total_fuel = fuel_trip + fuel_trip;
		printf("Total fuel consumed = %f",total_fuel);
	}
	else
	{
		printf("Invalid input.\n");
	}

	return 0;
}
  