#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,div,mod;
	printf("Enter a number 1 :- ");
	scanf("%d",&num1);
	printf("Enter a number 2 :- ");
	scanf("%d",&num2);
	add=num1 + num2;
	sub=num1 - num2;
	mul=num1 * num2;
	div=num1 / num2;
	mod=num1 % num2;
	printf("Addition of your numbers is %d ",add);
	printf("\nSubtraction of your numbers is %d ",sub);
	printf("\nMultiplication of your numbers is %d ",mul);
	printf("\nDivision of your numbers is %d ",div);
	printf("\nModulo of your numbers is %d ",mod);
	return 0;
}
