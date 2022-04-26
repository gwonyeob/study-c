#include<stdio.h>
#include<string.h>//문자열의 길이
int main()
{
	char sentence[1000001]={0};
	// char 배열
	// 문자열은 마지막이 null -> null이 나올때까지 입력받기
	// 
#if 1
	int i=0, length = 0, count = 0;
	scanf_s("%[^\n]s", &sentence, (int)sizeof(sentence));
	length = strlen(sentence);//문자열의 길이


#else
	int i = 0, length = 0, count = 0;
	scanf_s("%s", &sentence, sizeof(sentence));
	length = strlen(sentence);//문자열의 길이
#endif
	if (length == 1)//문자열이 하나만 입력
	{
		if (sentence[0] == ' ')//공백이 입력되었을 때
		{
			printf("0");
			return 0;
		}
	}
	for (i = 1; i < length - 1; i++)
	{
		if (sentence[i] == ' ')
		{
			count++;
		}
	}
	printf("%d", count + 1);
	return 0;

}
//c6328&c6262