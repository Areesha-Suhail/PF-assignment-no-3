#include<stdio.h>
#include<conio.h>

int main()
{
	float unit_consumed,bill_amount;
	printf("Enter the units consumed");
	scanf("%f", &unit_consumed);
	
	if (unit_consumed <=100){
		printf("bill_amount = 0");
	}
	else if(unit_consumed>=101 && unit_consumed>=200){
		bill_amount=unit_consumed*5;
	printf("your amount is %f",bill_amount);
	 }
 	else if (unit_consumed>=201 && unit_consumed>=300){
 		bill_amount = (unit_consumed*8);
	 }
		else (unit_consumed>300);
		{
		bill_amount = (unit_consumed*10);
	}
	getch();
}