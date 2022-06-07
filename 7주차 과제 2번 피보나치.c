#include <stdio.h>
int main()
{
    int n = 0;
    int sum = 0;
    printf("정수 입력: ");
    scanf_s("%d", &n);
    long long fb[1000] = { 1, 1 };
    for (int i = 2; i <= n; i++)
        fb[i] = fb[i - 1] + fb[i - 2];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1) //배열은 0부터 시작이므로 2로 나눴을때 나머지가 1인게 짝수번째
        {
            fb[i] = -fb[i];
            sum += fb[i];
            printf("%lld ", fb[i]);
        }
        else
        {
            sum += fb[i];
            printf("%lld ", fb[i]);
        }
    }
    printf("\n"); //줄 바꿈
    printf("합: %d", sum);
}