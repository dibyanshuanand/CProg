/* This program takes word and its length as input from user and display all the possible permutations of the word
        Created by : ironmerc  Date : 9/11/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) {
    int n;
    printf("Enter length of word : ");
    scanf("%d", &n);
    char str[n];
    printf("Enter word : ");
    scanf("%s", str);
    char per[n][n];
    char ch;
    int ctr = 0;

    while (ctr < n) {
        ch = str[0];
        for (int i = 0 ; i < n-1 ; ++i) {
            str[i] = str[i+1];
        }
        str[n-1] = ch;
        for (int j = 0 ; j < n ; ++j)
            per[ctr][j] = str[j];
        ctr++;
    }

    printf("The permutations of word are : \n");
    for (int k = 0 ; k < ctr ; k++) {
        for (int l = 0 ; l < n ; ++l)
            printf("%c", per[k][l]);
        printf("\n");
    }

    return 0;
}