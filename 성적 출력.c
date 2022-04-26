#include<stdio.h>
int main()
{
    int a;
    char grade;
    scanf_s("%d", &a);
    if (a >= 90)
        grade = 'A';
    else if (a >= 80)
        grade = 'B';
    else if (a >= 70)
        grade = 'c';
    else if (a >= 60)
        grade = 'd';
    else
        grade = 'f';
    printf("%c", grade);
    return 0;
}