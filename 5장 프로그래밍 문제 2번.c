#include<stdio.h>
int main()
{
	int number, addr; //number: 입력받는 정수
	int* poval; //포인터
	printf("키보드로 정수 1개를 입력하시오.: ");
	scanf_s("%d", &number);
	poval = &number;//주소
	addr = *poval;//실제 값
	printf("키보드로 입력한 값이 저장된 주소(16진수 표기): %X\n", poval);
	printf("포인터 변수 *poval에 저장된 값(10진수 표기): %d", addr);
	return 0;
}