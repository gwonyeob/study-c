#include <stdio.h>

int main()
{
    char c;
    scanf_s("%c", &c, sizeof(c)); //알파벳 입력 사이즈는 c=1?
    printf("입력한 알파벳: %c\n", c); 
    printf("알파벳 아스키 코드값:%d\n", c);
    printf("입력한 알파벳+ 8: %c\n", (c + 8));
    printf("프로그램을 종료합니다.");
    return 0;
}