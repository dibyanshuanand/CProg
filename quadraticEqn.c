#include <stdio.h>
#include <math.h>

void getData (int *a, int *b, int *c);
int quadratic (int a, int b, int c, double *pRoot1, double *pRoot2);
void printResults (int numRoots, int a, int b, int c, double root1, double root2);

int main (void) {
    int a, b, c, numRoots;
    double root1, root2;
    char again = 'Y';

    printf("Solve Quadratic Equations.\n\n");
    while (again == 'Y' || again == 'y') {
        getData(&a, &b, &c);
        numRoots = quadratic (a, b, c, &root1, &root2);
        printResults (numRoots, a, b, c, root1, root2);

        printf("\nDo you have another equation (Y/N) : ");
        scanf (" %c", &again);
    }
    printf("\nThank You.\n");

    return 0;
}

void getData (int *a, int *b, int *c) {
    printf("\nPlease enter coefficients a, b & c : ");
    scanf("%d %d %d", a, b, c);

    return;
}

int quadratic (int a, int b, int c, double *pRoot1, double *pRoot2) {
    int result;
    double discriminant, root;

    if (a == 0 && b == 0)
        result = -1;
    else
        if (a == 0) {
            *pRoot1 = -c / (double) b;
            result = 1;
        }
        else {
            discriminant = b * b - (4 * a * c);
            if (discriminant >= 0) {
                root = sqrt(discriminant);
                *pRoot1 = (-b + root) / (2 * a);
                *pRoot2 = (-b - root) / (2 * a);
                result = 2;
            }
            else
                result = 0;
        }
    return result;
}

void printResults (int numRoots, int a, int b, int c, double root1, double root2) {
    printf("Your equation: %dx**2 + %dx + %d\n", a, b, c);
    switch (numRoots) {
        case 2 : printf("Roots are: %6.3f & %6.3f\n", root1, root2);
                 break;
        case 1 : printf("Only one root: %6.3f\n", root1);
                 break;
        case 0 : printf("Roots are imaginary.\n");
                 break;
        default : printf("Invalid coefficients\n");
    }
    return;
}