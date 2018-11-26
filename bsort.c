# include <stdio.h>

int main (void) {

    int n, temp = 0;
    scanf("%d", &n);
    int i ,j;
    int a[n];

    for (i = 0; i < n ; ++i) {
    	scanf("%d", &a[i]);
    }


    for (i = n-1; i >= 0; --i) {
    	for(j = 0 ; j < i ; ++j) {
    		if (a[j] > a[j+1]) {
    			temp = a[j];
    			a[j] = a[j+1];
    			a[j+1] = temp;
    		}
    	}
    	
    }

    for (j = 0 ; j < n; ++j)
    	printf("%d ", a[j]);

    return 0;
}