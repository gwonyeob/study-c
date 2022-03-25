#include<stdio.h>
int main()
{
    int H, M, S, h, m, f;
    scanf_s("%d %d", &H, &M);
    scanf_s("%d", &S);
    h = (S+M) /60;
    m = (S+M) % 60;
    f = H + h;
    f = f%24;
    printf("%d %d", f, m);
    return 0;
}