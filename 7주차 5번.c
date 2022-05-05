#include<stdio.h>
int main()
{
	int count = 1; //첫 실행
	int i, j;
	char c;
	while (1)
	{
reset:
		printf("<%d회 실행>\n", count);
		for (int i = 9; i > 1; i--)
		{
			for (int j = 9; j > 1; j--)
			{
				printf("%d x %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
retry:		
		printf("프로그램을 다시 실행하겠습니까? (Y/N): ");
		scanf_s("%c", &c);
		getchar();
		if (c == 'y' || c == 'Y')
		{
			count++;
			goto reset;
		}
		else if (c == 'n' || c == 'N')
		{
			printf("총 %d회 실행 후 프로그램을 종료합니다.", count);
			return 0;
		}
		else
		printf("알파벳을 다시 입력하세요.\n");
	    goto retry;
	}
	return 0;
}