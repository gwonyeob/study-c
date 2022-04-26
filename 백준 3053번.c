#include<stdio.h>
#define PI 3.14159265359
int main()
{
	int r = 0;
	double result1, result2;
	scanf_s("%d", &r);
	result1 = (double)r * r * PI; //유클리드
	result2 = (double)r * r * 2; //택시
	printf("%.6lf\n%.6lf", result1, result2);
	return 0;
}