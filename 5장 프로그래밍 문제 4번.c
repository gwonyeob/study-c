#include<stdio.h>//문제가 이해가 안됨
int main()
{
	int num1, num2;
	int *poval1, *poval2;
	printf("정수 2개를 입력하시오(구분자는 콤마 사용). : ");
	scanf_s("%d, %d", &num1, &num2);
	printf("입력한 정수 2개는 %d, %d\n", num1, num2);
	poval1 = &num1;
	poval2 = &num2;
	printf("%d의 주소값: %d\n", num1, poval1);
	printf("%d의 주소값: %d", num2, poval2);
	return 0;
}