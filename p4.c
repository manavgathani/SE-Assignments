#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=1;j++)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			printf("\n"); 
			
	    }
	}
	return 0;
}
