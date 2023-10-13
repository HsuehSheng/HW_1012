#include <stdio.h>

int main()
{
	printf("number square cube\n");
	for (int i = 0; i < 11; i++)
	{
	    printf("%d      ",i);
		printf("%d      ",i*i);
		printf("%d      ",i*i*i);
		printf("\n");
	}
	return 0;
}