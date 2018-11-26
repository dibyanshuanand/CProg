#include <stdio.h>
#include <stdlib.h>

int main () {
    char *arr, a;
    int i = 0;
    arr = (char *)malloc(sizeof(char)*(i+1));
    while (5) {
        if ((arr) == NULL) {
            printf("no memory found");
            break;
        }
        *(arr+i) = getchar();
        if(*(arr+i) == '\n')
            break;
        i++;
        arr = (char *)realloc(arr, (sizeof(char)*(i+1)));
    }
    printf("%d", i);
    free(arr);
    return 0;
}