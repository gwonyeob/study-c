#include<stdio.h>
#define PI 2.5399 //inch
#define PS 3.3058 //평
void in(float num)
{
	printf("답> %.2f인치(inch)는 %.2f센티미터(cm) ", num, num * PI);
}
void p(float num)
{
	printf("답> %.2f평은 %.2f평방미터", num, num * PS);
}

int main()
{
	float num = 0;
	char c = { 0 }; //선택 입력받을 변수
	while (1)
	{
		printf("A. 인치를 센티미터로 환산하는 프로그램\n");
		printf("B. 평을 평방미터로 환산하는 프로그램\n");
		printf("Q. 프로그램 종료\n");
		printf("\n");
		printf("선택: ");
		scanf_s("%c", &c);
		getchar();
		if (c == 'A' || c == 'a')
		{
			printf("A. 인치를 센티미터로 환산하는 프로그램\n");
			printf("문> 인치(inch)를 입력하세요: ");
			scanf_s("%f", &num);
			getchar();
			printf("\n");
			printf("[인치를 센티미터로 환산하는 함수 호출]\n");
			printf("\n");
			in(num);
			printf("\n");
			printf("성공적으로 환산을 수행하였습니다.\n");
			printf("\n");

		}
		else if (c == 'B' || c == 'b')
		{
			printf("B. 평을 평방미터로 환산하는 프로그램\n");
			printf("문> 평을 입력하세요: ");
			scanf_s("%f", &num);
			getchar();
			printf("\n");
			printf("[평을 평방미터로 환산하는 함수 호출]\n");
			printf("\n");
			p(num);
			printf("\n");
			printf("성공적으로 환산을 수행하였습니다.\n");
			printf("\n");
		}
		else if (c == 'q' || c == 'Q')
		{
			printf("프로그램 종료");
			return 0;
		}
		else
		{
			continue;
		}
	}
}

