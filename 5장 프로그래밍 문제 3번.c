#include<stdio.h>
int main()
{
	int num1, num2, num3;
	int max = 0;
	printf("키보드로 정수값 3개를 입력하시오(구분자는 콤마 사용).: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	printf("키보드로 입력한 정수값 3개는 %d, %d, %d\n", num1, num2, num3);
	max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2:num3);
	printf("그 중에서 최댓값은 %d", max);
	return 0;
}