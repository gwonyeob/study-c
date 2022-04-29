#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	one: //goto로 back
	printf("정수값 입력: ");
	scanf_s("%d", &num);
	if (num > 0)
	{
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 1)
				sum += i;
		}
		printf("1부터 %d까지 홀수의 누적 합계는 %d", num, sum);
	}
	else if (num < 0)
	{
		printf("음의 정수값은 허용하지 않습니다.\n");
		printf("양의 정수값을 다시 입력하세요.\n");
		goto one;
	}
}