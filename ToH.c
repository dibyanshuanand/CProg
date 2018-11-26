#include <stdio.h>

void towers(int , char, char, char);

int main (void) {
    int n;
    char s, d, a;
    printf("Welcome to TOWERS OF HANOI\n");
    printf("\nEnter number of disks : ");
    scanf("%d", &n);
    printf("\nEnter source disk : ");
    scanf("%c", &s);
    printf("\nEnter destination disk : ");
    scanf("%c", &d);
    printf("\nEnter auxiliary disk : ");
    scanf("%c", &a);

    towers (n, s, d, a);

    return 0;
}

void towers (int n , char source, char dest, char auxiliary) {
    static int step = 0;

    printf("Towers (%d %c %c %c)\n", n, source, dest, auxiliary);
    if (n == 1)
        printf("\t\t\t\tStep %3d: Move from %d to %d\n", ++step, source, dest);
    else {
        towers (n-1, source, auxiliary, dest);
        printf("\t\t\t\tStep %3d: Move from %c to %c\n", ++step, source, dest);
        towers (n-1, auxiliary, dest, source);
    }
    return;
}