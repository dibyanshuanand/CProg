#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, j, k;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements :\n");
    for (int i = 0 ; i < n ; ++i)
        scanf("%d", &a[i]);

    for (int i = 1 ; i < n ; ++i) {
        k = a[i];
        for (j = i-1 ; j >= 0 && k < a[j] ; --j)
            a[j+1] = a[j];
        a[j+1] = k;
    }

    printf("Sorted Array :\n");
    for (int i = 0 ; i < n ; ++i)
        printf("%d ", a[i]);

    return 0;
}
