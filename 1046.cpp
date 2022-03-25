#include <stdio.h>
int main(void)
{
    int num1, num2, num3, sum; // 정수 3개 선언
    float avr; 
    scanf_s("%d %d %d", &num1, &num2, &num3); //정수 3개 입력
    sum = num1 + num2 + num3; 
    avr = sum / 3.0; //float형으로 변환후 계산
    printf("%d\n", sum);
    printf("%.01f", avr); //소수 첫째자리까지(둘째자리 반올림)
    return 0;
}