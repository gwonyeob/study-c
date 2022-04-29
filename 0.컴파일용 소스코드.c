#include<stdio.h>
int main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	if (n > m)
		printf("%d", n - m);
	else if (n < m)
		printf("%d", m -n);
	else
		printf("0");
	return 0;
}