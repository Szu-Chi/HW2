#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double interest_rate,interest;
	for (interest_rate = 0.1; interest_rate < 0.125; interest_rate += 0.005)
	{
		interest = 5000 * interest_rate * 15;
		printf("Interest_rate : %.3lf \n",interest_rate);
		printf("Interest is %.2lf \n\n",interest);
	}
	system("pause");
	return 0;
}