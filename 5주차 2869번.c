#include<stdio.h>
int main()
{
	int a, b, tree;
	int day = 0;
	scanf_s("%d %d %d", &a, &b, &tree);
	day = (tree - b - 1) / (a - b) + 1;
	printf("%d", day);
	return 0;
}