#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void heart();
int main()
{
	int num = 0;
	while (1)
	{
		menu();
		printf("번호 선택: ");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			heart();
			num = 0;
			break;
		case 2:
			printf("프로그램 종료!");
			return 0;
			break;
		}
	}
}
void menu()
{
	printf("■랜덤 함수로 하트를 찾는 프로그램\n");
	printf("1. 프로그램 실행\n");
	printf("2. 프로그램 종료\n");
}
void heart()
{
	int arr[11][14] = { {0},{0} };
	srand(time(NULL));
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			arr[i][j] = (rand() % 99);
		}
	}
	printf("------------------------------------------------------------\n");
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (arr[i][j] > 20)
			{
				printf("* ");
			}
			else
				printf("♥");
		}
		printf("\n");
	}
	printf("\n");
	printf("------------------------------------------------------------\n");
}