#include<stdio.h>
#include<conio.h>
int main()
{
	float maths, science;
	printf("Enter your maths score");
	scanf("%f", &maths);
	printf("Enter your science score");
	scanf("%f", &science);
	
	float totalscore = maths+science;
	
	if (totalscore >= 50)
	{
		printf("You are eligiable for admission\n");
	
	if (totalscore >= 80)
	{
		printf("You qualify for scholarship");
	}
		}
	else 
	{
		printf("You are not eligiable for admission");
	}
}