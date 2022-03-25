#include<stdio.h>
int main()
{
	char op;
	char str[12]; //char의 크기 12자리
	scanf_s("%c", &op);
	getchar();
	scanf_s("%s", &str, sizeof(str)); //문자열은 문자열의 크기 선언?인가 필수
	printf("1. 문자 출력:\t%c\n", op);
	printf("2. 문자열 입력:\t|%-12s|", str); //문자열을 입력하고 남은 부분은 공백으로 채움
	return 0;
}