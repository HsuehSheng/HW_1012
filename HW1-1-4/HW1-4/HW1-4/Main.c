#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf(" ");
		}
		if(i > 0) printf("*");
	
		for (j =1 ; j < 2*i; j++)
		{	
			printf(" ");
		}

		printf("*");

		for (j = 0; j < 5 - i; j++)
		{
			printf(" ");
		}
		
		printf("\n");
	}

	//---------------------------------//

	for (i = 4; i > -1; i--)
	{
		
		for (j=0;j< 5-i;j++)
		{
			printf(" ");
		}

		printf("*");

		for (j = 0; j < 2 * i-1; j++)
		{
			printf(" ");
		}

		if(i!=0) printf("*");
		printf("\n");
		
	}
	return 0;
}
