#include<stdio.h>
int main()
{
    int T=0;
    for (int i = 0; i <= T; i++)
    {
        int A, B;
        scanf_s("%d %d", &A, &B);
        printf("Case #%d: %d", T, A + B);
    }
    return 0;
}