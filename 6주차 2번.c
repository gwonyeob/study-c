#include<stdio.h>
int main()
{
	int num = 0;
	//char c[10];
	char *c;
	int mok = 0;
	printf("점수 입력: ");
	scanf_s("%d", &num);
	mok = num / 5;
	if (num <= 100 && num >= 0)
	{
		switch (mok)
		{
		case 20:
		case 19:
			c ="A+";
			break;
		case 18:
			c ="A0";
			break;
		case 17:
			c ="B+";
			break;
		case 16:
			c = "B0";
			break;
		case 15:
			c ="C+";
			break;
		case 14:
			c ="C0";
			break;
		case 13:
			c ="D+";
			break;
		case 12:
			c ="D0";
			break;
		default:
			c ="F";
			break;
		}
	}
	else
	{
		printf("입력한 점수 %d는(은) 허용구간이 아닙니다.\n", num);
		printf("프로그램을 다시 실행하세요");
		return 0;
	}
	printf("입력한 점수: %d\n", num);
	printf("점수 등급: %s학점", c);
	return 0;
}