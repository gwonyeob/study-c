#include<stdio.h>//N: 별의 개수, i,p
int main()
{
    int N;
    scanf_s("%d", &N);
    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p <= 5; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}