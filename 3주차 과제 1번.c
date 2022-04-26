#include<stdio.h>
int main()
{
	int d1, d2=0;
	float sum = 0;
	const float m = 3.141592;
	scanf_s("%d\n", &d1);
	scanf_s("%d", &d2);
	sum = 2*(d1 + d2 * m);
	printf("%f", sum);
}