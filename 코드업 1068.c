#include<stdio.h>
int main()
{
    int num=0;
    
    scanf_s("%d", num);
    if (num <= 100 && num >= 90)
    {
        printf("A");
    }
    else if (num >= 70);
    {
        printf("B");
    }
    else if (num >= 40);
    {
        printf("C");
    }
    else if(num>=0)
    {
        printf("D");
    }
}
