#include<stdio.h>
void shopkeeper(int cash);
int main()
{
	int count = 0, cash = 0;
	int i;
	printf("정적 변수와 사용자 정의 함수를 사용한 가계부 프로그램");
reinput:
	printf("입출금 횟수 지정(1~10): ");
	scanf_s("%d", &count);
	if (count > 10)
	{
		printf("허용 범위가 아닙니다.\n");
		goto reinput;
	}
	for (i=1; i <= count; i++)
	{
		printf("<%d회 실행>\n", i);
		printf("현금: ");
		scanf_s("%d", &cash);
		printf("입금\t\t출금\t\t잔액\n");
		shopkeeper(cash);
	}
	printf("\n총 %d회 실행 후 프로그램 종료\n", i - 1);
}
void shopkeeper(int cash)
{
	static int balance = 0;
	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf("\t\t%d\t\t", -cash);
	balance += cash;
	printf("%d\n", balance);
}
