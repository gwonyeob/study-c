extern int sum;
extern void add_10(int num);
extern void add_1000(int num);
void add_1(int num)
{
	sum += num;
	add_10(10);
}
void add_100(int num)
{
	sum += num;
	add_1000(1000);
}
void print(sum)
{
	printf("연산 결과: %d", sum);
}