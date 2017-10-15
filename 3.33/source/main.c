#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 12; j++)
			if ( i == 1 && !( j == 0 || j == 11 ))
				printf(" ");
			else
				printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}