#include <stdio.h>

int primeCheck(int);

int main (void) {
    int n;
    int i, j;
    int num1, num2;
    int flag = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1 ; i < n ; ++i) {
        if (primeCheck(i)) {
            for (j = 1 ; j <= (n-i) ; ++j) {
                if ((primeCheck(j)) && ((i + j) == n)) {
                    flag = 1;
                    num1 = i;
                    num2 = j;
                    goto out;
                }
            }
        }
    }
    out :
        if (flag == 1)
            printf("\n");

    if (flag == 1)
        printf("%d can be expressed as sum of Prime numbers %d and %d\n", n, num1, num2);
    else
        printf("\n%d cannot be expressed as sum of two prime numbers\n", n);

    return 0;
}

int primeCheck (int n) {
    int a;
    int count = 0;
    for (a = 1; a <= n ; ++a) {
        if (n % a == 0)
            count++;
    }
    if (count == 2)
        return 1;
    else
        return 0;
}