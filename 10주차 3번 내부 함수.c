#include<stdio.h>
int sumsumsum;
extern void add(int num1, int num2);
int main()
{
	printf("전역 변수를 연결하는 함수 프로그램\n");
	add(100, 200);
	printf("연산 결과: %d", sumsumsum);
	return 0;
}
