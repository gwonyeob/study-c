#include<stdio.h>
void menu() //첫 실행화면
{
	printf("1. 학생 3명의 정보 입출력 프로그램\n");
	printf("2. 입력한 숫자의 구구단 출력 프로그램\n");
	printf("3. 1부터 입력한 숫자까지 누적 합계 출력 프로그램\n");
}
void input()
{
	int class = 0;
	char uv[10] = { 0 };
	char name[5] = { 0 };
	getchar();
	printf("1. 학생 3명의 정보 입출력 프로그램\n");
	printf("학생 1의 정보 입력\n");
	printf("학교: ");
	scanf_s("%s", uv, sizeof(uv));
	getchar();
	printf("학번: ");
	scanf_s("%d", &class);
	printf("이름: ");
	getchar();
	scanf_s("%s", name, sizeof(name));
	printf("학생 1의 정보 출력\n");
	printf("1. 학교: %s\n", uv);
	printf("2. 학번: %d\n", class);
	printf("3. 이름: %d\n", name);
}
void sum()
{
	int n = 0;
	int sumsum = 0;
	int i;
	printf("누적 합계 구할 숫자 입력: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sumsum += i;
	}
	printf("1부터 %d까지 누적 합계는 %d", n, sumsum);
}
void gugudan()
{
	int i, j;
	int dan = 0;
	printf("출력할 단 입력: ");
	scanf_s("%d", &dan);
	printf("< %d단 >", dan);
		for (i = 1; i<=9; i--)
		{
			printf("%d x %d = %05d: 바깥쪽 for문 (%d)일 때, 안쪽 for문 (%d)", dan, i,  i * dan, dan, i);
		}
		printf("\n");
}
int main()
{
	char c = { 0 };
	menu();
	char num = {0};
	while (1)
	{
		printf("프로그램을 선택하세요(1~3): ");
		scanf_s("%c", &num);
		getchar();
		switch (num)
		{
		case '1':
			input();
			break;
		case '2':
			sum();
			break;
		case '3':
			gugudan();
			break;
		default:
			printf("선택 범위가 아닙니다. 번호를 다시 선택하세요.\n");
			continue;
		}
		printf("\n");
		printf("프로그램 수행 성공!\n");
reinput:
		printf("프로그램을 다시 실행하겠습니까?(Y/N): ");
		getchar();
		scanf_s("%c", &c);
		getchar();
		switch (c)
		{
		case 'Y':
		case 'y':
			printf("다시 실행!\n");
		case 'N':
		case 'n':
			printf("프로그램 %d 수행 후 종료", num);
			return 0;
		default:
			goto reinput;
		}
	}
}


