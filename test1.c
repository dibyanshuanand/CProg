#include <stdio.h>
#include <string.h>
#define n 1072

int a[1];

void main () {
	// int n;
	for (int i = 0 ; i < n ; i++) {
		a[i] = i;
		printf("%d ", a[i]);
	}

	return;
}