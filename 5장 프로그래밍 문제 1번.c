#include<stdio.h>
int main()
{
	printf("포인터 변수를 사용하여 문자열을 출력하는 프로그램\n");
	char *str[100] = { 0 };//문자열
	printf("문자열 입력: ");
	scanf_s("%s", &str, sizeof(str));
	printf("문자열 상수 출력: %s\n", str);
	printf("문자열 상수 주소: %X", &str);
}