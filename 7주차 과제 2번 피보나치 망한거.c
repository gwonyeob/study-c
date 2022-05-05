#include <stdio.h>
int main()
{
    int n = 0;
    int i;
    int sum = 0;
    printf("정수 입력: ");
    scanf_s("%d", &n);
    long long fb[200] = { 1, 1 };
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d ", fb[i]);
            sum = 1;
        }
        else if (i == 1)
        {
            fb[i] = -fb[i];
            printf("%d ", fb[i]);
            sum = 0;
        }
        else
        {
            fb[i] = fb[i - 1] + fb[i - 2];
            if (i % 2 == 1)
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
        printf("\n");
    }
    printf("합: %d", sum);
    return 0;
}
