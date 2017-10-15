#include<stdio.h>
#include<stdlib.h>

int main(void) {
	double sales_dollars,salary;
	while (1) {
		printf("Enter sales in dollars (-1 to end ) : ");
		scanf_s("%lf", &sales_dollars);
		if (sales_dollars == -1)break;
		salary = sales_dollars * 0.09 + 200.00;
		printf("Salary is : %.2lf\n",salary);
	}
	system("pause");
	return 0;
}