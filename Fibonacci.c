#include<stdio.h>
int main()
{
	int num,reverse=0;
	printf("\nEnter a number to reverse :- ");
	scanf("%d",&num);
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("\nReverse of a number is %d",reverse);
	return 0;
}
