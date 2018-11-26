#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void) {
    FILE *fpIn;
    FILE *fpOut;
    int numIn;
    int closeResult;

    printf("Running file copy\n");

    for (int i = 1 ; i < 20 ; ++i) {
        printf ("#");
        sleep (2);
    }

    fpIn = fopen("input.txt" , "r");
    if (!fpIn) {
        printf("Could not open input file\a\n");
        exit(101);
    }

    fpOut = fopen("output.txt" , "w");
    if (!fpOut) {
        printf("Could not open output file\a\n");
        exit(102);
    }

    while ((fscanf(fpIn, "%d", &numIn)) == 1)
        fprintf(fpOut, "%d\n", numIn);
    
    closeResult = fclose(fpOut);
    if (closeResult == EOF) {
        printf("Could not close output file\a\n");
        exit (201);
    }

    printf("\nFile copy complete\n");
    return 0;
}