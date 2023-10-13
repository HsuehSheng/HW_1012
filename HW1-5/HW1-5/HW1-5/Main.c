#include <stdio.h>

int main()
{
	int num1, num2;
	printf("enter two integers to determine whether the first is a multiple of the second = ");
	scanf_s("%d",&num1);
	scanf_s("%d", &num2);

	if (num1 % num2 == 0)
		printf("Yes,the first is a multiple of the second.\n");
	else
		printf("No,the first is not a multiple of the second.\n");
	return 0;
}