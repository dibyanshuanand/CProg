#include <stdio.h>

int main ()
{
    int amt; float bal;
    scanf("%d %f", &amt, &bal);
    if(((float)amt)>(bal-0.50))
        printf("%.2f", bal);
    
    else if(amt%5!=0)
        printf("%.2f", bal);
    
    else
    {
        printf("%.2f", (bal-amt-0.50));
    }
    return 0;
}