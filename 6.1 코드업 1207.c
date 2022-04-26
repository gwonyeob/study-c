#include<stdio.h>
int main()
{
	int num1, num2, num3, num4;
	int result = 0;
    scanf_s("%d %d %d %d", &num1, &num2, &num3, &num4);
    result = num1 + num2 + num3 + num4;

    if (result== 1)
        printf("µµ");
    else if (result== 2) 
        printf("°³");
    else if (result == 3)
        printf("°É"); 
    else if (result == 4) 
        printf("À·");
    else 
        printf("¸ð");
    return 0;
}