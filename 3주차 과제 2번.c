#include<stdio.h>
int main()
{
    int a, b;
    scanf_s("%d %d", &a, &b);
    if (a > b) {
        printf(">");
    }
    if (a == b) {
        printf("==");
    }
    if (a < b) {
        printf("<");
    }

}