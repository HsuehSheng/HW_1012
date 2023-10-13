#include <stdio.h>

int main()
{
	float h, w;
	float BMI;
	printf("enter height(m) = ");
	scanf_s("%f", &h);
	printf("enter weight(kg) = ");
	scanf_s("%f", &w);

	BMI = w / ( h * h );

	printf("BMI Value = %f\n",BMI);

	if(BMI < 18.5) printf("underweight\n");
	if (BMI < 24.9 && BMI > 18.5) printf("normal\n");
	if (BMI < 29.9 && BMI > 25) printf("overweight\n");
	if (BMI >= 30) printf("obese\n");




	return 0;
}