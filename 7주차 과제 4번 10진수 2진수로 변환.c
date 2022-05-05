#include<stdio.h>
void div(unsigned int n)
{
		if (n < 2)
			printf("%d", n);
		else
		{
			div(n / 2);
			printf("%d", n % 2);
		}
}
int main()
{
	unsigned int num = 0;
	printf("10진수 양의 정수 입력: ");
	scanf_s("%d", &num);
	printf("%d(10) = ", num);
	div(num);
	printf("(2)");
}