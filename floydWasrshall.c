#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <limits.h>
#include <math.h>
#define intMax 1000000000
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })
#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

int main () {
    int a[][4] = {{7,5,0,0},{7,0,0,2},{0,3,0,0},{4,0,1,0}};

    // for (int i = 0 ; i < 4; ++i) {
    //     for (int j = 0; j < 4; ++j)
    //         printf("%d ", a[i][j]);
    //     printf("\n");
    // }

    for (int i = 0 ; i < 4; ++i) {
        for (int j = 0; j < 4 ; ++j) {
            if (a[i][j] == 0)
                a[i][j] = intMax;
        }
    }

    for (int k = 0 ; k < 4; ++k) {
        for (int i = 0 ; i < 4 ; ++i) {
            for (int j = 0 ; j < 4 ; ++j)
                a[i][j] = min(a[i][j] , (a[i][k] + a[k][j]));
        }
    }

    for (int i = 0 ; i < 4; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}