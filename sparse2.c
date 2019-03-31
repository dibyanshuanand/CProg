#include <stdio.h>
#include <stdlib.h>

int main () {
    int r, c, nzero;
    printf("Enter three tuple representation ;\n");
    scanf("%d %d %d", &r, &c, &nzero);

    int spr[nzero], spc[nzero], spe[nzero];

    for (int i = 0; i < nzero ; ++i) {
        scanf("%d %d %d", &spr[i], &spc[i], &spe[i]);
    }

    int a[r][c];

    for (int i = 0 ; i < r ; ++i) {
        for (int j = 0 ; j < c ; ++j)
            a[i][j] = 0;
    }

    for (int i = 0 ; i < nzero ; ++i) {
        a[spr[i] - 1][spc[i] - 1] = spe[i];
    }

    printf("\nThe matrix is :\n");

    for (int i = 0 ; i < r ; ++i) {
        for (int j = 0 ; j < c ; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0 ;
}