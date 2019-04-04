#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int m, n ,p,  t;

    printf("Enter order of 1st matrix : R x C : ");
    scanf("%d %d", &m, &n);

    printf("Enter order of 2nd matrix : R x C : ");
    scanf("%d %d", &p, &t);

    if (p != n) {
        printf("\nMatrix not compatible for multiplication\n");
        return 0;
    }

    int i , j , l = 1, k = 1 , r , s;
    int a[m][n];
    int b[n][t], res[m][t];

    // for (i = 0 ; i < m ; ++i) {
    //     a[i][0] = 1;

    //     for (j = 1 ; j < n ; ++j)
    //         a[i][j] = a[i][j-1] + k;
        
    //     k++;
    // }

    // for (i = 0 ; i < n ; i++) {
    //     b[i][0] = 2;
    //     for (j = 1 ; j < t ; ++j)
    //         b[i][j] = b[i][j-1] + l;
        
    //     l++;
    // }

    printf("\nEnter data for matrix 1 : \n");
    for (int i = 0 ; i < m ; ++i) {
        for (int j = 0 ; j < n ; ++j)
            scanf("%d", &a[i][j]);
    }

    printf("\nEnter data for 2nd matrix : \n");
    for (int i = 0 ; i < n ; ++i) {
        for (int j = 0 ; j < t ; ++j)
            scanf("%d", &b[i][j]);
    }

    for (i = 0 ; i < m ; ++i) {

        for(j = 0 ; j < t ; ++j) {
            l = 0 ; r = 0; s = 0;
            while (l < n) {
                s = s + (a[i][l] * b[r][j]);
                l++;
                r++;
            }
            res[i][j] = s;
        }
    }

    printf("\nThe resultant matrix is :\n");

    for (i = 0 ; i < m ; ++i) {
        for (j = 0 ; j < t ; ++j)
            printf ("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}