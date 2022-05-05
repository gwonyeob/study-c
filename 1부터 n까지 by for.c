#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
retry:
	printf("어디까지 합을 구할까요?: ");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("음의 정수는 허용하지 않습니다\n");
		printf("프로그램을 다시 시작합니다");
		goto retry;
	}
	else
	{
		for (int i = 1; i < num + 1; i++)
		{
			sum += i;
		}
		printf("1부터 %d까지의 합은 %d입니다", num, sum);
	}
	return 0;
}