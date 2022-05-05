#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	int count = 1;
one: //goto로 back
	printf("정수값 입력: ");
	scanf_s("%d", &num);
	if (num > 0)
	{
		do {
			sum += count;
			count++;
		} while (count < num + 1);
		printf("1부터 %d까지 누적 합계는 %d", num, sum);
	}
	else if (num < 0)
	{
		printf("음의 정수값은 허용하지 않습니다.\n");
		printf("양의 정수값을 다시 입력하세요.\n");
		goto one;
	}
}