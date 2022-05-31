#include<stdio.h>
#define sr 2
#define sc 3
#define dr 3
#define dc 9
int score[sr][sc];
int main()
{
	char det[dr][dc] = { "국어점수","영어점수", "수학점수"};
	int i, j;
	double avg=0;
	printf("2명의 3개 과목 점수에 대한 총점과 평균을 각각 출력하는 프로그램\n");
	for (i = 0; i < 2; i++)
	{
		printf("[ %d번째 ] 학생의 3개 과목 점수를 입력하시오.\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%s: ", det[j]);
			scanf_s("%d", &score[i][j]);
			avg += score[i][j];
		}
		printf("답>> 평균 점수: %.2f\n", avg / 3.0);
		avg = 0;
	}
}
