#include <stdio.h>

int main(void)
{
    int n, k, i, j, flag=0;
    scanf("%d %d", &n, &k);
    long a[n];
    for(i=1;i<=n;++i)
    {
        printf("\n");
        scanf("%ld", &a[i-1]);
        if(a[i-1]%k==0)
        	++flag;
    }
    
    printf("\n %d \n", flag);
    return 0;
}