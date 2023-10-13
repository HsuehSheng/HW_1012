#include <stdio.h>

int main()
{
	float tmdpd, cpgog, ampg, pfpd, tpd;
	printf("enter Total miles driven per day = ");
	scanf_s("%f", &tmdpd);
	printf("enter Cost per gallon of gasoline = ");
	scanf_s("%f", &cpgog);
	printf("enter Average miles per gallon = ");
	scanf_s("%f", &ampg);
	printf("enter Parking fee per day = ");
	scanf_s("%f", &pfpd);
	printf("enter Tolls per day = ");
	scanf_s("%f", &tpd);

	float total_cost = ((tmdpd / ampg) * cpgog) + pfpd + tpd;

	printf("TotalCost = %f\n", total_cost);


	return 0;
}