#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j;
	printf("(A) \t\t(B) \t\t(C) \t\t(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%s", "*");
		//================================= (A)＃
		if (i < 7)
			printf("\t\t");
		else
			printf("\t");
		//=================================
		for (j = 10; j > i; j--)
			printf("%s", "*");
		//================================= (B)＃
		if (i > 2)
			printf("\t\t");
		else
			printf("\t");
		//=================================
		for (j = 0; j < 10; j++)
			if (j < i)
				printf("%s", " ");
			else
				printf("%s", "*");
		//================================= (C)＃
		printf("\t");
		//================================= 
		for (j = 10; j >= 0; j--)
			if (j > i)
				printf("%s", " ");
			else
				printf("%s", "*");
		//================================= (D)＃

		printf("\n");
	}
	system("pause");
	return 0;
}