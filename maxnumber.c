#include<stdio.h>
int main()
{
	int A,B,C;
	printf("Enter the numbers A,B and C :- ");
	scanf("%d%d%d",&A,&B,&C);
	if(A>=B && A>=C)
		printf("%d is the maximum number",A);
	if(B>=A && B>=C)
		printf("%d is the maximum number",B);
	if(C>=B && C>=A)
		printf("%d is the maximum number",C);
	return 0;
}
