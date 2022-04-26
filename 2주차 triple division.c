#include<stdio.h>
int main()
{
	int num1, num2, triple;
	float division;
	scanf_s("%d %d", &num1, &num2);
	triple = num1 * num1 * num1;
	division = (float)num1 / num2;
	printf("세제곱 연산 결과:%08d\n", triple); //8자리 출력 나머지 0으로 채우기
	printf("나눗셈 연산 결과:%08.3f", division); //8자리 출력 나머지 0으로 채우기->소수점도 포함인거 인지 
	return 0; 
}