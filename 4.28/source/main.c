#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("(1) managers\n");
	printf("(2) hourly workers\n");
	printf("(3) commission workers\n");
	printf("(4) pieceworkers\n");
	printf("請輸入 1 ~ 4 選擇職業類型:\n");
	int choose,week,hours_worked,work_num;
	double salary, weekly_rate,hourly_rate,workly_rate, sales_dollars;
	scanf_s("%d", &choose);
	printf("\n");
	switch(choose) {
		case 1:
			printf("選擇 (1) managers\n");
			printf("請輸入每周薪資 : ");
			scanf_s("%lf",&weekly_rate);
			printf("請輸入工作幾周 : ");
			scanf_s("%d", &week);
			salary = week * weekly_rate;
			printf("薪資: %.2lf \n" ,salary);
			break;
		case 2:
			printf("選擇 (2) hourly workers\n");
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
			printf("選擇 (3) commission workers\n");
			printf("Enter sales in dollars : ");
			scanf_s("%lf", &sales_dollars);
			salary = sales_dollars * 0.057 + 250.00;
			printf("Salary is : %.2lf\n", salary);
			break;
		case 4:
			printf("選擇 (4) pieceworkers\n");
			printf("請輸入每份工作薪資 : ");
			scanf_s("%lf",&workly_rate);
			printf("請輸入已完成工作數 : ");
			scanf_s("%d",&work_num);
			salary = work_num * workly_rate;
			printf("薪資: %.2lf \n", salary);
			break;
		default:
			printf("錯誤輸入!!!\n");
			break;
	}
	system("pause");
	return 0;
}