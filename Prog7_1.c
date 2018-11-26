#include <stdio.h>

int main (void) {
    FILE *fpTemps;

    if ((fpTemps = fopen("TEMPS.dat", "r")) == NULL) {
        printf ("\aERROR opening TEMPS.dat\n");
        return (100);
    }

    if (fclose(fpTemps) == EOF) {
        printf ("\aERROR closing TEMPS.dat\n");
        return (102);
    }
    
}