#include <stdio.h>

int main (void) {
    int m, n , t;

    scanf("%d %d %d", &m, &n, &t);

    int i , j , l = 1, k = 1 , r , s;
    int a[m][n];
    int b[n][t], res[m][t];

    for (i = 0 ; i < m ; ++i) {
        a[i][0] = 1;

        for (j = 1 ; j < n ; ++j)
            a[i][j] = a[i][j-1] + k;
        
        k++;
    }

    for (i = 0 ; i < n ; i++) {
        b[i][0] = 2;
        for (j = 1 ; j < t ; ++j)
            b[i][j] = b[i][j-1] + l;
        
        l++;
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

    for (i = 0 ; i < m ; ++i) {
        for (j = 0 ; j < t ; ++j)
            printf ("%d \t", res[i][j]);
        
        printf("\n");
    }

    return 0;
}