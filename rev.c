//This program is used to reverse a number
#include <stdio.h>
int main ()
{
	int n,n1,d,rev=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	n1=n;
	while (n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("The reverse of %d is %d \n", n1,rev);
	return 0;
}