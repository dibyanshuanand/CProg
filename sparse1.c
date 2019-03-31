#include <stdio.h>
#include <stdlib.h>

int main () {
    int r,c;
    printf ("Enter number of rows * columns : ");
    // int a[][3] = {{1,2,3},{1,2,3},{3,4,5}};
    scanf("%d*%d", &r, &c);
    int a[r][c];

    printf("Enter elements :\n");
    for (int i = 0 ; i < r; ++i) {
        for (int j = 0 ; j < c ; ++j)
            scanf("%d", &a[i][j]);
    }

    int zero = 0, nzero = 0;
    for (int i = 0 ; i < r; ++i) {
        for (int j = 0 ; j < c; ++j)
            if (a[i][j] == 0)
                zero++;
            else
                nzero++;
    }

    if (zero <= nzero) {
        printf("The matrix is not a sparse matrix\n");
        return 0;
    }
    
    int spr[nzero+1], spc[nzero+1], spe[nzero+1];
    spr[0] = r;
    spc[0] = c;
    spe[0] = nzero;
    int k = 1;

    for (int i = 0 ; i < r; ++i) {
        for (int j = 0 ; j < c ; ++j) {
            if (a[i][j] != 0){
                spr[k] = i+1;
                spc[k] = j+1;
                spe[k] = a[i][j];
                k++;
            }
        }
    }

    printf("/nThree tuple represntation of the given sparse matrix :\n");
    for (int i = 0 ; i <= nzero ; ++i) {
        printf("%d  %d  %d\n", spr[i], spc[i], spe[i]);
    }

    return 0;
}