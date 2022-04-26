#include<stdio.h>
int main()
{
	float mile, km = 0;
	printf("마일을 킬로미터로 환산하는 프로그램\n");
	const float m = 1.61;//기호 상수 m
	printf("마일 입력(소수 둘째 자리): ");
	scanf_s("%f", &mile);
	km = m * mile;
	printf("%0.2f마일은 %0.2fkm입니다.", mile, km);
	return 0;
}