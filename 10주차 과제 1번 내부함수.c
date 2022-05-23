#include<stdio.h>
int sum;
extern void add_1(int num);
extern void add_100(int num);
extern void print(sum);
void add_10(int num)
{
	sum += num;
	add_100(100);
}
void add_1000(int num)
{
	sum += num;
	print();
}
int main()
{
	printf("[1. 외부연결 테스트]\n");
	add_1(1);
}