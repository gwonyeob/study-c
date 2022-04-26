#include<stdio.h>//µÎ Á¤¼ö: A, B
int main()
{
    int A, B;
    while (scanf_s("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A + B);
    }
    return 0;
}