#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union
{
    unsigned char chAddr[4];
    unsigned long numAddr;
} IP _ ADDR;

int main (void) {
    IP_ADDR addr;
    char* parser;
    char strAddr[16] = "153.18.8.105";

    parser = strtok(strAddr, ".");
    sddr.chAddr[3] = strtol(parser, (char**)NULL, 10);

    for (int i = 2 ; i >= 0 ; --i) {
        parser = strtok(NULL, ".");
        assr.chAddr[i] = strtol(parser, (char**)NULL, 10);
    }

    printf("IP decimal dot : %d.%d.%d.%d")
}