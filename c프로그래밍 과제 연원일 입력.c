#include<stdio.h> 
int month=0, year=0, day=0;
int mon[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int days = 0; //며칠인가
int main()
{
    printf("연 월 일을 순서대로 입력하세요.: ");
    scanf_s("%d %d %d", &year, &month, &day); //윤년 판별
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        mon[2]++; //2월 29일
    if (month == 1)
    {
        printf("%d", day);
        return 0;
    }
    else
    {
        for (int i = 0; i < month ; i++)
        {
            days += mon[i];
        }
        printf("%d년 %d월 %d일은 %d년 1월 1일부터 %d일째 되는 날입니다", year, month, day, year,  days + day);
    }
    return 0;
}
