#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int size = 90;
	int i, j;
	printf("請輸入菱形大小 : ");
	scanf_s("%d", &size);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size * 2; j++)
		{
			if (j < (size - i) || j >(size + i))
				printf("%s", " ");
			else
				printf("%s", "*");
		}
		printf("\n");
	}
	for (i = 2; i < size + 2; i++)
	{
		for (j = 0; j < size * 2; j++)
		{
			if (j < i || j > (size * 2 - i ))
				printf("%s", " ");
			else
				printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}