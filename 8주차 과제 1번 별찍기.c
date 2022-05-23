#include <stdio.h>

int main()
{
	int n;
	int i, j, k;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (k = 0; k < 2 * n - (2 * i + 1); k++) {
			printf("*");

		}
		printf("\n");
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < (n - 1) - i - 1; j++)
			printf(" ");
		for (k = 0; k < 2 * i + 3; k++)
			printf("*");
		printf("\n");


	}

	return 0;
}