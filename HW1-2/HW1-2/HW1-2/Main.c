#include <stdio.h>

int main()
{
	int num[3], largest, smallest;
	printf("enter three integers = ");
	

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 2; i++)
	{
		if (num[i] > num[i + 1])
		{
			largest = num[i];
			num[i] = num[i + 1];
			num[i + 1] = largest;
		}
	}

	printf("largest integer = %d\n " ,num[2]);
	

	for (int i = 0; i < 2; i++)
	{
		if (num[i] < num[i + 1])
		{
			smallest = num[i];
			num[i] = num[i + 1];
			num[i + 1] = smallest;
		}
	}

	printf("smallest integer = %d\n ", num[2]);

	return 0;
}