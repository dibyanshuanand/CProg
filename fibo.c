#include <stdio.h>

int fib0 (int);

int main(void)
{
	int n;
	int res;
	scanf("%d", &n);
	res = fib0(n);
	printf("%d \n", res);
	return 0;
}

int fib0 (int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib0(n-1) + fib0(n-2);
	
}