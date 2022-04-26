#include<stdio.h>
int main()
{
	int A, I;// A:°îÀÇ °³¼ö, I: Æò±Õ°ª
	scanf_s("%d %d", &A, &I);
	printf("%d", A * (I - 1) + 1);
	return 0;
}