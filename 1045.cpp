#include <stdio.h>
int main()
{
    int num1, num2;
    scanf_s("%d %d", &num1, &num2); //num1, num2 저장
    printf("%d\n", num1 + num2); //더하기
    printf("%d\n", num1 - num2); //뺴기
    printf("%d\n", num1 * num2); //곱하기
    printf("%d\n", num1 / num2); //몫->나머지로 착각하지 말기
    printf("%d\n", num1 % num2);  //나머지->몰랐던 것 기억하기
    printf("%.02f", (float)num1 / (float)num2); //int를 float형으로 변환 후 몫 계산
    return 0;
}