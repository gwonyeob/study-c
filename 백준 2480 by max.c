#include<stdio.h>
int main()
{
    int a, b, c ;
    int max = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a ==b&&b==c&&c==a)
    {
        printf("%d", 10000 + 1000 * a);
    }
    else if (a == b)
    {
        printf("%d", 1000 + 100 * a);
    }
    else if (b == c)
    {
        printf("%d", 1000 + 100 * b);
    }
    else if (a == c)
    {
        printf("%d", 1000 + 100 * c);
    }
    else
    {
        if (a > b && a > c)
            max = a;
        else if (b > c && b > a)
            max = b;
        else if (c > a && c > b)
            max = c;
        printf("%d", max * 100);
    }
}