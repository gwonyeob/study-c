#include<stdio.h>//number: 처음 입력받은 정수, result: 대조값, a:result의 십의 자리 수
//b:result의 일의 자리수, c:새로운 수의 일의 자리수, d:새로운 수의 십의 자리 수
int main()
{
    int number;
    scanf_s("%d", &number);
    int result, a, b, c, d;
    int count = 0;
    result = number;
    while (1)
    {
        a = number / 10;
        b = number % 10;
        c = (a + b) % 10;
        d = (b % 10) * 10;
        number = c + d;
        count++;
        if (number == result) break;
    }
    printf("%d", count);
    return 0;
}