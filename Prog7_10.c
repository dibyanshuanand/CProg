#include <stdio.h>

#define WHT_SPC (cur == ' ' || cur == '\n' || cur == '\t')

int main (void) {
    int cur;
    int countWd = 0;
    char word = 'O';
    FILE *fp1;

    if(!(fp1 = fopen("input.txt" , "r")))
    {
        printf ("Error opening input.txt for reading");
        return (1);
    }
    while ((cur = fgetc(fp1)) != EOF)
    {
        if (WHT_SPC)
            word = 'O';
        else
            if (word == 'O')
            {
                countWd++;
                word = 'I';
            }
    }

    printf ("The number of words is : %d\n", countWd);

    fclose(fp1);
    return (0);
}