#include <stdio.h>
int main()
{
    char a;
    printf("문자를 입력하시오: ");
    scanf_s("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("입력한 %c는(은) \"소문자 알파벳\" 입니다.\n", a);
    else if (a >= 'A' && a <= 'Z')
        printf("입력한 %c는(은) \"대문자 알파벳\" 입니다.\n", a);
    else if (a >= '0' && a <= '9')
        printf("입력한 %c는(은) \"숫자\"입니다.\n", a);
    else
        printf("입력한 %c는(은) \"기타 문자\"입니다.\n", a);
    return 0;
}
