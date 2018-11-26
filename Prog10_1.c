#include <stdio.h>
#define MAX_SIZE 10

int main (void) {
    int ary[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pWalk, *pEnd;
    printf("Array Forward : ");
    for (pWalk = ary , pEnd = ary + MAX_SIZE; pWalk < pEnd ; pWalk++)
        printf ("%3d", *pWalk);

    printf("\n");

    return 0;
}