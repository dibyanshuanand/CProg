#include <stdio.h>
#include <stdlib.h>

void buildFile (FILE **fp);
void printFile (FILE *fp);
void randomPrint (FILE *fp);

int main (void) {
    FILE *fpData;
    buildFile (&fpData);
    printFile (fpData);
    randomPrint (fpData);

    return 0;
}
