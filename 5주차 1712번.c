#include<stdio.h>
int main()
{
	long a, b, c;
	int result = 0;
	scanf_s("%ld %ld %ld", &a, &b, &c);
	if (c - b <= 0)
	{
		result = -1;
	}
	else
	{
		result = a / (c - b);
		result++;
	}
	printf("%d", result);
}