#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int days;
	double loan_principal, interest_rate, interest_charge;
	while (1){
		printf("Enter loan principal ( -1 to end )\t: ");
		scanf_s("%lf", &loan_principal);
		if ( loan_principal == -1 )break;

		printf("Enter interest rate \t: ");
		scanf_s("%lf", &interest_rate);

		printf("Enter term of the loan in days \t: ");
		scanf_s("%d", &days);

		interest_charge = loan_principal * interest_rate * days / 365;

		printf("The interest charge is %.2lf\n\n", interest_charge);
	}
	system("pause");
	return 0;
}