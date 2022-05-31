#include<stdio.h>
#define P 5
double sv(double score[], double size);
int main()
{
	double sum = 0;
	printf("1차원 배열 요소의 덧셈 연산 결과를 출력하는 프로그램\n");
	double score[P] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	sum = sv(score, P);
	printf("제시>>list[5]={12.3, 35.8, 57.29, 96.53, 28.37}\n");
	printf("호출>> 사용자 정의 함수에서 배열 요소의 합게 산출\n");
	printf("\n");
	printf("반환>> 사용자 정의 함수 -> 메인 함수\n");
	printf("결과>> 배열 요소의 합계: %.2f", sum);
}
double sv(double score[], double size)
{
	double total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += score[i];
	}
	return total;
}