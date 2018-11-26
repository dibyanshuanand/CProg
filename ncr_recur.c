#include <stdio.h>

int cRec (int, int);

int main (void) {
    int res;
    int n , r;
    printf ("Enter n : ");
    scanf ("%d", &n);
    printf ("Enter r : ");
    scanf ("%d", &r);
    res = cRec(n, r);
    printf ("\n The value of %dC%d is %d \n", n, r, res);

    return 0;
}

int cRec (int n, int r) {
    int result;

    if (n == r )
        return 1;
    else if (r == 0)
        return 1;
    else {
        result = cRec(n-1, r-1) + cRec(n-1, r);
    }
    return (result);
}