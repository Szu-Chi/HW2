#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int account_num = 0;
	double beginning_balance, total_charges, total_credits, credit_limit;
	double new_balance;
	while (1)
	{
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &account_num);

		if (account_num == -1)break;

		printf("Enter beginning balance: ");
		scanf_s("%lf", &beginning_balance);
		
		printf("Enter total charges: ");
		scanf_s("%lf", &total_charges);
		
		printf("Enter total credits: ");
		scanf_s("%lf", &total_credits );
		
		printf("Enter credit limit: ");
		scanf_s("%lf", &credit_limit);

		new_balance = beginning_balance + total_charges - total_credits;

		printf("Account \t: %d\n",account_num);
		printf("Credit limit \t: %.2lf\n", credit_limit);
		printf("Balance \t: %.2lf\n",new_balance);
		printf("Credit Limit Exceeded \t\n\n");

	}
	system("pause");
	return 0;
}