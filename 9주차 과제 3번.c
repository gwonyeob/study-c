#include<stdio.h> 
#include<string.h> 
long long fact(int num) 
{ 
	if (num == 1 || num == 0) 
    { 
		return 1; 
	}
	return num * fact(num - 1);
}
int combi(int n, int r) 
{
	if (n < r)
		return 0;
	else if (n == r) 
	{
		return 1; 
	}
	int a = fact(n); 
	int b = fact(r);
	int c = fact(n - r); 
	return a / (b*c); 
} 
int main()
{ int n, r, res=0; 
	printf("n: "); 
	scanf_s("%d", &n);
	printf("c: ");
	scanf_s("%d", &r);
	printf("nCr: ");
	printf("%d", combi(n,r)); 
	return 0; 
}
