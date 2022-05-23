int sum;
static int result;
void plus(int num1)
{
	printf("plus(): %d 더하기\n", num1);
	result += num1;
}
void sub(int num1)
{
	printf("sub(): %d 빼기\n", num1);
	result -= num1;
}
void mul(int num1)
{
	printf("mul(): %d 곱하기\n", num1);
	result *= num1;
}
void div(int num1)
{
	printf("div(): %d 나누기\n", num1);
	result /= num1;
	sum = result;
}