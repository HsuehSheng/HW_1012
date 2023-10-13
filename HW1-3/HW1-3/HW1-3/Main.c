#include <stdio.h>

int main()
{
	int num;
	printf("enter a integer to determin odd or even = ");
	scanf_s("%d", &num);

	if (num % 2 == 0) printf("It's even\n");
	if (num % 2 != 0) printf("It's odd\n");


	return 0;
}