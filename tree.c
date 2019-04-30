#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *lt;
    struct node *rt;
};

struct node* search(struct node *);
// struct node* rSearch(struct node *);

int main () {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    struct node *root, *ptr, *new;
    // ptr = (struct node*)malloc(sizeof(struct node));

    for (int i = 0 ; i < 10 ; ++i) {
        if (i == 0) {
            ptr = (struct node *)malloc(sizeof(struct node));
            ptr -> data = a[i];
            ptr -> lt = NULL;
            ptr -> rt = NULL;
            root = ptr;
        }
        else {
            struct node *sptr = search(root);
            // struct node *rptr = rSearch(root);
            new = (struct node *)malloc(sizeof(struct node));
            new -> lt = NULL;
            new -> rt = NULL;
            // if (lptr == NULL)
            //     lptr -> lt = new;
            // else if (rptr == NULL)
            //     rptr -> rt = new;
        }
    }
}

struct node *search(struct node *pt) {
    struct node *lptr, *rptr;
    if (pt -> lt == NULL || pt -> rt == NULL)
        return pt;
    else{
        lptr = search(pt -> lt);
        
        rptr = search(pt -> rt);
    }
}