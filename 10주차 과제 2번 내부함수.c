#include<stdio.h>
extern int sum;
extern void plus(num1);
extern void sub(num1);
extern void mul(num1);
extern void div(num1);
void print(sum);
int result;
int main()
{
	printf("[2. 외부연결 사칙연산]\n");
	printf("main(): result는 0\n");
	plus(10);
	sub(3);
	mul(100);
	div(2);
	print();
}
void print()
{
	printf("print(): result는 %d", sum);
}