#include<stdio.h>
#define PI 2.54 //2.54->PI
int main()
{
	printf("인치를 센티미터로 환산하는 프로그램\n");
	float inch, cm=0;
	printf("인치 입력(소수 둘째 자리): ");
	scanf_s("%f", &inch);
	cm = PI * inch;
	printf("%0.2f인치는 %0.2fcm입니다.", inch, cm);
}
