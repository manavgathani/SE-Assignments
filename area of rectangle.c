#include<stdio.h>
#include<conio.h>
int main()
{
	int length,breadth,area;
	printf("Enter the length of a rectangle :- ");
	scanf("%d",&length);
	printf("Enter the breadth of a rectangle :- ");
	scanf("%d",&breadth);
	area=length * breadth;
	printf("Area of rectangle is %d ",area);
	return 0;
}
