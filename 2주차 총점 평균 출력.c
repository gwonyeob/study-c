#include<stdio.h>
int main()
{
    int k, e, m;
    float sum;
    scanf_s("%d %d %d", &k, &e, &m);
    sum = k + e + m;
    printf("1. 국어 점수: %d\n", k);
    printf("2. 영어 점수: %d\n", e);
    printf("3. 수학 점수:%d\n", m);
    printf("총점: %f\n", sum);
    printf("평균: %0.2f", sum / 3.0);
    return 0;
}