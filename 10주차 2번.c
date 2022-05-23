#include<stdio.h>
void login(int count)
{
	static count = 0;
	count++;
	if (count == 1)
		printf("1회 실행: 로그인 성공\n");
	else
	{
		printf("%d회 실행; 현재 로그인 상태\n", count);
		printf("확인\n");
	}
}

int main()
{
	int count;
	printf("정적 지역 변수로 로그인 여부를 판별하는 프로그램\n");
	printf("for문으로 로그인 판별 함수 3회 호출\n");
	for (int i = 0; i < 3; i++)
	{
		login(count);
	}
	printf("총 3회 수행 후 프로그램 종료");

}