#include <stdio.h>
#include <stdlib.h>

int main ()
{
    void *arr;
    int i = 0, count;
    arr = (char *)malloc(sizeof(char)*(i+1));
    if (arr == NULL) {
        printf("No memory allocated");
    }
    while(4) {
        *((char *)(arr + i)) = getchar();
        if (*((char *)(arr + i)) == '\n')
            break;
        i++;
        arr = (char *)realloc(arr, (sizeof(char)*(i+1)));
    }

    count = i;
    // for (int i = 0 ; i < count ; ++i)
    //     printf("%c", *((char *)(arr + i)));
    for (int i = count-1 ; i > 0 ; i--) {
        for (int j = i ; j > 0 ; j--) {
            int temp;
            if (*((int *)(arr + j)) > *((int *)(arr + i))) {
                temp = *((int *)(arr + j));
                *((int *)(arr + j)) = *((int *)(arr + i));
                *((int *)(arr + i)) = temp;
            }
            printf("%d", *((int *)(arr + i)));
        }
    }

    free(arr);
    return 0;
}