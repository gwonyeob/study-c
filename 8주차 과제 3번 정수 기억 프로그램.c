#include<stdio.h>
int main()
{
	printf("[정수 기억 프로그램]\n");
	int num = 0; //정수 저장
	int c = 0;
	while (1)
	{
		printf("1. 정수 입력   2.정수 출력   3. 0초기화   4. 종료\n");
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
			printf("정수를 입력해주세요: ");
			scanf_s("%d", &num);
			printf("===================================================\n");
			break;
		case 2:
			printf("저장된 정수: %d\n", num);
			printf("===================================================\n");
			break;
		case 3:
			printf("0으로 초기화\n");
			num = 0;
			printf("===================================================\n");
			break;
		case 4:
			printf("\n");
			printf("종료합니다.");
			return 0;
		default:
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
		}
	}
	return 0;
}