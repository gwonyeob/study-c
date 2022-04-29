#include<stdio.h>
int main()
{
	int count = 1; //한번에 찾는 경우 
	char ap;
	while (1)
	{
		printf("알파벳 입력: ");
		scanf_s("%c", &ap);
		getchar();
		if (ap == 'q' || ap == 'Q')
		{
			printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", count);
			printf("찾는 알파벳은 대소 문자 구별없이 \'Q\'입니다.");
			return 0;
		}
		else
		{
			printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n");
			count++;
		}
	}
}