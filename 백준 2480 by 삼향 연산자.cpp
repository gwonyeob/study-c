#include<stdio.h>
int main()
{
    int a, b, c, result;
    int prize = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a == b == c)
    {
        prize=10000 + 1000 * a;
    }
    else if (a == b || b == c)
    {
        prize = 1000 + 100 * b;
    }
    else if (a == c)
    {
        prize=1000 + 100 * a;
    }
    else
    {
        result = a > b ? a : b;
        result = result > c ? result : c;
        prize=100 * result;
    }
    printf("%d", prize);
    return 0;
}