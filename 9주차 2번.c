#include<stdio.h>
void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("원판 1: %c => %c로 이동\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp);
		printf("원판 %d: %c => %c로 이동\n", n, from, to);
		hanoi(n - 1, tmp, from, to);
	}
}
int main()
{
	char c = { 0 };
	do
	{
		{
			    printf("[ 탑의 원판 이동하는 함수 호출]\n");
				hanoi(3, 'A', 'B', 'C');
				printf("\n");
				printf("원판을 모두 이동하였습니다.\n");
				reset:
			printf("프로그램을 다시 실행하겠습니까? (Y/N):  ");
			scanf_s("%c", &c);
			getchar();
			switch (c)
			{
			case 'Y':
			case 'y':
				break;
			case 'N':
			case 'n':
				printf("프로그램을 종료합니다.");
				return 0;

			default:
				goto reset;
			}
		}
	} while (1);
}