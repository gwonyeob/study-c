#include<stdio.h>
int main()
{
    int H, M;
    scanf_s("%d %d", &H, &M);
    if (H == 0)
    {
        if (M < 45)
        {
            M = M + 15;
            H = 23;
        }
        else if (M >= 0)
        {
            M = M - 45;
        }
    }
    else if (H <= 23)
    {
        if (M < 45)
        {
            M = M + 15;
            H = H - 1;
        }
        else if (M >= 0)
        {
            M = M - 45;
        }
    }
    printf("%d %d", H, M);
    return 0;
}