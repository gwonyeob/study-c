#include<stdio.h>
int main()
{
	int count = 1; //첫 실행
	int i, j;
	char c;
	do
	{
	reset:
		printf("<%d회 실행>\n", count);
		for (int i = 9; i > 0; i--)
		{
			for (int j = 9; j > 1; j--)
			{
				printf("%d x %d = %d   ", j, i, i * j);
			}
			printf("\n");
		}
retry:		
		printf("프로그램을 다시 실행하겠습니까? (Y/N): ");
		scanf_s("%c", &c);
		getchar();
		switch (c)
		{
			case 'Y':
			case 'y':
				count++;
				goto reset;
				break;
			case 'N':
			case 'n':
				printf("총 %d회 실행 후 프로그램을 종료합니다.", count);
				return 0;
				break;
			default:
				printf("알파벳을 다시 입력하세요.\n");
				goto retry;
				break;
		}
	} while(1);
}