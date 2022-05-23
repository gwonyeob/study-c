#include<stdio.h>
int plus(int num1, int num2)
{
	return num1 + num2;
}
int minus(int num1, int num2)
{
	return num1 - num2;
}
int gob(int num1, int num2)
{
	return num1 * num2;
}
double div(int num1, int num2)
{
		return (double)num1 / num2;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	char c;
	printf("숫자 1: ");
	scanf_s("%d", &num1);
	getchar();
	printf("수식: ");
	scanf_s("%c", &c);
	getchar();
	printf("숫자 2: ");
	scanf_s("%d", &num2);
	getchar();
	switch (c)
	{
	case '+':
		printf("%d %c %d = %d\n\n", num1, c, num2, plus(num1, num2));
		break;
	case '-':
		printf("%d %c %d = %d\n\n", num1, c, num2, minus(num1, num2));
		break;
	case '*':
		printf("%d %c %d = %d\n\n", num1, c, num2, gob(num1, num2));
		break;
	case '/':
		if (num2 == 0)
		{
			printf("0으로 나눌 수 없습니다!");
		}
		else
			printf("%d %c %d = %lf\n\n", num1, c, num2, div(num1, num2));
		break;
	default:
		printf("다시 입력하세요 :");
		break;
	}
}