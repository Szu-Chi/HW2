#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("(1) managers\n");
	printf("(2) hourly workers\n");
	printf("(3) commission workers\n");
	printf("(4) pieceworkers\n");
	printf("�п�J 1 ~ 4 ���¾�~����:\n");
	int choose,week,hours_worked,work_num;
	double salary, weekly_rate,hourly_rate,workly_rate, sales_dollars;
	scanf_s("%d", &choose);
	printf("\n");
	switch(choose) {
		case 1:
			printf("��� (1) managers\n");
			printf("�п�J�C�P�~�� : ");
			scanf_s("%lf",&weekly_rate);
			printf("�п�J�u�@�X�P : ");
			scanf_s("%d", &week);
			salary = week * weekly_rate;
			printf("�~��: %.2lf \n" ,salary);
			break;
		case 2:
			printf("��� (2) hourly workers\n");
			printf("Enter # of hours worked\t :");
			scanf_s("%d", &hours_worked);

			printf("Enter hourly rate of worker ( $ 00.00) \t :");
			scanf_s("%lf", &hourly_rate);

			if (hours_worked > 40)
				salary = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
			else
				salary = hours_worked * hourly_rate;
			printf("Salary is $ %.2lf \n\n", salary);
			break;
		case 3:
			printf("��� (3) commission workers\n");
			printf("Enter sales in dollars : ");
			scanf_s("%lf", &sales_dollars);
			salary = sales_dollars * 0.057 + 250.00;
			printf("Salary is : %.2lf\n", salary);
			break;
		case 4:
			printf("��� (4) pieceworkers\n");
			printf("�п�J�C���u�@�~�� : ");
			scanf_s("%lf",&workly_rate);
			printf("�п�J�w�����u�@�� : ");
			scanf_s("%d",&work_num);
			salary = work_num * workly_rate;
			printf("�~��: %.2lf \n", salary);
			break;
		default:
			printf("���~��J!!!\n");
			break;
	}
	system("pause");
	return 0;
}