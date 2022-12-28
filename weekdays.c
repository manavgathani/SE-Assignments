#include<stdio.h>
int main()
{
	int day;
	printf("Enter 1 for monday");
	printf("\nEnter 2 for tuesday");
	printf("\nEnter 3 for wednesday");
	printf("\nEnter 4 for thursday");
	printf("\nEnter 5 for friday");
	printf("\nEnter 6 for saturday");
	printf("\nEnter 7 for sunday");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid");
			
		
		
	}
	return 0;
}
