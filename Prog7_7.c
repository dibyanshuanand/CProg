#include <stdio.h>

int main (void) {
    FILE *fpText;
    int c;
    int closeStatus;

    printf("This program copies your input to a file.\n");
    printf("When you are through, enter <EOF>.\n\n");

    if (!(fpText =fopen("output.txt" , "w")))
    {
        printf("Error opening output.txt for writing");
        return (1);
    }
    
    
    while((c = getchar()) != EOF)
        fputc(c, fpText);
    
    closeStatus = fclose(fpText);
    if (closeStatus == EOF)
    {
        printf("Error closing file\a\n");
        return 100;
    }

    printf("\n\nYour file is complete\n");
    return 0;    
}