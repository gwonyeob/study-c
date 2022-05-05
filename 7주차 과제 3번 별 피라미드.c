#include<stdio.h>
int main()
{
	int num = 0;
	printf("줄 수: ");
	scanf_s("%d", &num);
	int count = 1; //피라미드의 길이
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= count; j++)
		{
			if (j % 2 == 1)
				printf("*");
			else
				printf(" ");
			if (j == count)
				printf("\n");
		}
		count += 2;
	}
	return 0;
}