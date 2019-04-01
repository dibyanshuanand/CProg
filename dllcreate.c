#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *lptr;
    struct node *rptr;
};

struct node *head, *last;
void create (int);
void display();

int main () {
    printf("Creating Linked List : \n");
    printf("Enter number of nodes to be formed : ");
    int n;
    scanf("%d", &n);
    head = (struct node*)malloc(sizeof(struct node));
    create(n);
    display();
}

void create (int num) {
    struct node *ptr, *par;
    int d;
    printf("\nEnter data for all nodes : \n");
    for (int i = 0 ; i < num ; ++i) {
        scanf("%d", &d);
        ptr = (struct node *)malloc(sizeof(struct node));
        if (i == 0) {
            head = ptr;
            ptr -> data = d;
            ptr -> lptr = NULL;
            par = ptr;
        }
        else {
            ptr -> data = d;
            par -> rptr = ptr;
            ptr -> lptr = par;
            par = ptr;
        }
    }
    last = ptr;
    ptr -> rptr = NULL;

    printf("\nLinked List Created\n");
    
    return;
}

void display () {
    struct node *ptr = head;
    do {
        printf("\nDATA : %d\nlptr : %p\nrptr : %p", ptr -> data, ptr -> lptr, ptr -> rptr);
        ptr = ptr -> rptr;
    } while (ptr != NULL);

    return;
}