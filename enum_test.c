#include <stdio.h>
#include <stdlib.h>

int main (void) {
    enum months
        {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
        enum months dateMonth;

        printf("\nEnter your input\n");
        scanf("%u", &dateMonth);

        switch (dateMonth)
        {
            case JAN : printf("\nIt's January !!\n");
            break;
            case FEB : printf("\nIt's February !!\n");
            break;
            case MAR : printf("\nIt's March !!");
            break;
            case APR : printf("\nIt's March !!\n");
            break;
            case MAY : printf("\nIt's April !!\n");
            break;
            case JUN : printf("\nIt's June !!\n");
            break;
            case JUL : printf("\nIt's July !!\n");
            break;
            case AUG : printf("\nIt's August !!\n");
            break;
            case SEP : printf("\nIt's September !!\n");
            break;
            case OCT : printf("\nIt's October !!\n");
            break;
            case NOV : printf("\nIt's November !!\n");
            break;
            case DEC : printf("\nIt's December !!\n");
            break;
            default : printf("\nEnter a valid input \n");
        }

}