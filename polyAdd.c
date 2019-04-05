#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int expox;
    int expoy;
    struct node *link;
};

struct node *head1, *head2, *res;
struct node* create();
struct node* add();

int main () {
    struct node *sptr;
    printf("Enter polynomial 1 : \n");
    head1 = create();
    printf("\nEnter polynomial 2: \n");
    head2 = create();

    res = add();
    sptr = res;

    while (sptr != NULL) {
        printf("%d x%d y%d  ", sptr -> coeff , sptr -> expox, sptr -> expoy);
        sptr = sptr -> link;
    }

    return 0;
}

struct node* create () {
    struct node *ptr, *nptr, *par;
    int c, ex, ey;
    printf("Enter coefficient : ");
    scanf("%d", &c);
    printf("Enter x exponent : ");
    scanf("%d", &ex);
    printf("Enter y exponent : ");
    scanf("%d", &ey);

    nptr = (struct node *)malloc(sizeof(struct node));
    nptr -> link = NULL;
    nptr -> coeff = c;
    nptr -> expox = ex;
    nptr -> expoy = ey;

    par = nptr;
    ptr = nptr;

    while (1) {
        nptr = (struct node *)malloc(sizeof(struct node));
        nptr -> link = NULL;

        printf("Enter coefficient (0 to exit) : ");
        scanf("%d", &c);
        if (c == 0)
            break;
        printf("Enter x exponent : ");
        scanf("%d", &ex);
        printf("Enter y exponent : ");
        scanf("%d", &ey);

        nptr -> coeff = c;
        nptr -> expox = ex;
        nptr -> expoy = ey;

        par -> link = nptr;
        par = nptr;
    }

    // sptr = ptr;

    // while (sptr != NULL) {
    //     printf("\n%d x%d y%d  ", sptr -> coeff , sptr -> expox, sptr -> expoy);
    //     sptr = sptr -> link;
    // }

    return ptr;
}

struct node* add() {
    struct node *ptr1, *ptr2, *rptr, *rpar, *rhead;
    ptr1 = head1;
    ptr2 = head2;
    int count = 1;

    while (ptr1 != NULL && ptr2 != NULL) {
        if ((ptr1 -> expox + ptr1 -> expoy) > (ptr2 -> expox + ptr2 -> expoy)) {
            rptr = (struct node *)malloc(sizeof(struct node));
            rptr -> link = NULL;
            rptr -> coeff = ptr1 -> coeff;
            rptr -> expox = ptr1 -> expox;
            rptr -> expoy = ptr1 -> expoy;

            ptr1 = ptr1 -> link;
        }
        else if ((ptr1 -> expox + ptr1 -> expoy) < (ptr2 -> expox + ptr2 -> expoy)) {
            rptr = (struct node *)malloc(sizeof(struct node));
            rptr -> link = NULL;
            rptr -> coeff = ptr2 -> coeff;
            rptr -> expox = ptr2 -> expox;
            rptr -> expoy = ptr2 -> expoy;

            ptr2 = ptr2 -> link;
        }
        else {
            if ((ptr1 -> expox == ptr2 -> expox) && (ptr1 -> expoy == ptr2 -> expoy)) {
                rptr = (struct node *) malloc(sizeof(struct node));
                rptr -> link = NULL;
                rptr -> expox = ptr1 -> expox + ptr2 -> expox;
                rptr -> expoy = ptr1 -> expox + ptr2 -> expoy;

                ptr1 = ptr1 -> link;
                ptr2 = ptr2 -> link;
            }
            else {
                rptr = (struct node *)malloc(sizeof(struct node));
                rptr -> link = NULL;
                rptr -> expox = ptr1 -> expox;
                rptr -> expoy = ptr1 -> expoy;

                ptr1 = ptr1 -> link;
            }
        }

        if (count == 1)
            rhead = rptr;
        else
            rpar -> link = rptr;
        
        rpar = rptr;
        count++;
    }

    while (ptr1 != NULL) {
        rptr = (struct node *)malloc(sizeof(struct node));
        rptr -> link = NULL;
        rptr -> expox = ptr1 -> expox;
        rptr -> expoy = ptr2 -> expoy;

        rpar -> link = rptr;
        rpar = rptr;
    }

    while (ptr2 != NULL) {
        rptr = (struct node *)malloc(sizeof(struct node));
        rptr -> link = NULL;
        rptr -> expox = ptr1 -> expox;
        rptr -> expoy = ptr2 -> expoy;

        rpar -> link = rptr;
        rpar = rptr;
    }

    return rhead;
}