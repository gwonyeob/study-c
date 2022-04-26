#include<stdio.h>
int main()
{
	printf("배열을 사용하여 문자열을 출력하는 프로그램\n");
	char input[20] = { 0 };
	printf("문자열 입력: ");
	scanf_s("%s", input, sizeof(input));
	printf("문자열 입력: \"%s\"");
	printf("문자열 출력: %d\n", &input);
}