#include<stdio.h>
int main()
{
	float base,height,area;
	printf("Enter the base of a triangle :- ");
	scanf("%f",&base);
	printf("Enter the height of a triangle :-");
	scanf("%f",&height);
	area=(base * height)/2;
	printf("Area of triangle is %f ",area);
	return 0;
}
