#include<stdio.h>
int main(void)
{
    int num1, num2;
    scanf_s("%d.%d", &num1, &num2); //정수 부분 실수 부분 나눠서 저장?
    printf("%d\n", num1); //정수 부분
    printf("%d", num2);//실수 부분
    return 0;
}