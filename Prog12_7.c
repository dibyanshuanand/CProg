/* This program checks whether your computer is little endian or big endian.
    In output, if you receive Ch[0] and Ch[1] as A and B, then your computer is Big Endian
    In all other cases of output, computer is Little Endian.
*/

#include <stdio.h>

typedef union
{
    short num;
    char chAry[2];
} SH_CH2;

int main (void) {
    SH_CH2 data;

    data.num = 16706;

    printf("Short: %hd\n", data.num);
    printf("Ch[0]: %c\n", data.chAry[0]);
    printf("Ch[1]: %c\n", data.chAry[1]);

    return(0);
} //main