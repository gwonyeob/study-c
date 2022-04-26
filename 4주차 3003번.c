#include<stdio.h>
int main()
{
	int array[6] = { 1, 1, 2, 2, 2, 8 };//array: 원래 체스판
	int i = 0, number = 0;
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &number);
		printf("%d ", array[i] - number);
	}
	return 0;
}