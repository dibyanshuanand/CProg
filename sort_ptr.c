#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort (int m, int *x) {
    int i, j, temp;
    for (i = 1 ; i <= m-1 ; ++i) {
        for (j = 1 ; j <= m-1 ; ++j) {
            if (*(x+j-1) >= *(x+j)) {
                temp = *(x+j-1);
                *(x+j-1) = *(x+j);
                *(x+j) = temp;
            }
        }
    }
}

int main (void) {
    int a[10];
    int *ptr = a;
    int i = 0;
    while (i < 10)
        scanf ("%d", ptr+i++);

    sort (10, a);
    i = 0;
    while (i < 10)
        printf("\n%d", *(ptr+i++));

    return 0;
}