#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
    char s[50];
    int lower = 0;
    int upper = 0;
    int n;
    printf("Enter a string : ");
    gets(s);
    
    for (int i = 0 ; i < strlen(s) ; ++i) {
        n = (int)s[i];
        if ((n >= 65) && (n <= 90))
            upper++;
        else if ((n >= 97) && (n <= 122))
            lower++;
    }

    printf("\nThe number of capital letters are %d\n", upper);
    printf("\nThe number of small letters are %d\n", lower);

    return 0;
}