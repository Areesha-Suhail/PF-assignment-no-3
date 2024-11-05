#include<stdio.h>
#include<conio.h>
int main()
{
	int age, weight;
	printf("Enter your age");
	scanf("%d", &age);
	printf("Enter your weight");
	scanf("%d", &weight);
	if (age<=18 && age>=65) {
		printf("You are eligible to donate the blood");
	}
		else if (weight<=50) {
			printf("You are not eligible to donate the blood due to your weight");
		}
		else {
			printf("You are not eligible to donate the blood.");
		}
}