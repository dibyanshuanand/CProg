#include <stdio.h>

int main(void)
{
    int curCh;
    int preCh;
    int countLn = 0;
    int countCh = 0;
    FILE *fp1;

    if  (!(fp1 = fopen("input.txt" , "r")))
    {
        printf("Error opening input.txt for reading");
        return (1);
    }

    while ((curCh = fgetc(fp1)) != EOF)
    {
        if (curCh != '\n')
            countCh++;
        else
            countLn++;
            preCh = curCh;
    }
    if (preCh != '\n')
        countLn++;

    printf("Number of characters: %d\n", countCh);
    printf("Number of lines: %d\n", countLn);

    fclose(fp1);
    
    return 0;
}
