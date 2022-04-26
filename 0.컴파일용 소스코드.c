#include<stdio.h>
//컵만 움직이므로 공이 있는 컵의 번호를 바꾸기
int main()
{
	int num, a, b;
	int ball = 1; //첫번째 1번컵
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d %d", &a, &b);
		if (ball == a) //1번째 숫자에 공이 있는 경우
			ball = b;
		else if (ball == b) //2번째 숫자에 공이 있는 경우
			ball == a;
	}
	printf("%d", ball);
	return 0;
}