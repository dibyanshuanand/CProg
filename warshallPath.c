#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main () {
    int a[][4] = {{0,1,0,1},{1,0,1,1},{0,0,0,1},{1,0,1,0}};

    for (int k = 0 ; k < 4 ; ++k) {
        for (int i = 0; i < 4 ; ++i) {
            for (int j = 0 ; j < 4 ; ++j)
                a[i][j] = a[i][j] | (a[i][k] & a[k][j]);
        }
    }
    
    for (int i = 0 ; i < 4 ; ++i) {
        for (int j = 0 ; j< 4 ; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}