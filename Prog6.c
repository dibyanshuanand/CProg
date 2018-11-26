#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {
    char s[50];
    char ch;
    int a[50][2];
    char res[50];

    printf ("\nEnter a string : ");
    gets (s);
    printf("\nEnter character : ");
    scanf("%c", &ch);

    a[0][0] = 0;
    int j = 0;

    for (int i = 0 ; i < strlen(s) ; ++i) {
        if (s[i] == '\n') {
            a[j][1] = i - 1;
            j++;
            a[j][0] = i + 1;
        }
    }

    printf("\nThe words ending with %c are : \n", ch);

    for (int i = 0 ; i < 50 ; ++i) {
        int flag = 0;
        if (s[a[i][1]] == ch) {
            for (int j = a[i][0] ; j <= a[i][1] ; ++j) {
                res[flag] = s[j];
                flag++;
            }
            printf("%s\n", res);
        }
            
    }

    return 0;
}