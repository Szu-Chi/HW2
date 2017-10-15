#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int hours_worked;
	double hourly_rate,salary;
	while (1) {
		printf("Enter # of hours worked ( -1 to end )\t :");
		scanf_s("%d",&hours_worked);
		if (hours_worked == -1)break;
		
		printf("Enter hourly rate of worker ( $ 00.00) \t :");
		scanf_s("%lf",&hourly_rate);

		if (hours_worked > 40)
			salary = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
		else
			salary = hours_worked * hourly_rate;
		printf("Salary is $ %.2lf \n\n", salary);
	}
	system("pause");
	return 0;
}