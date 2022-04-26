#include<stdio.h>//월 입력->계절 출력
int main()
{
	int season;
	scanf_s("%d", &season);
	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	}
	return 0;
}
