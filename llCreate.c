#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

// struct node *start = NULL;
// struct node *create_ll(struct node *);

int main () {
    struct node *first, *ptr, *new_node;
    // first = (struct node *)malloc(sizeof(struct node));
    int num, num_nodes;
    printf("Enter number of nodes : \n");
    scanf("%d", &num_nodes);
    printf("Enter the data : \n");
    // scanf("%d", &num);
    int count = 1;
    ptr = NULL;

    while (count++ <= num_nodes) {
        scanf("%d", &num);
        new_node = (struct node *)malloc(sizeof(struct node));
        if (ptr != NULL)
            ptr -> next = new_node;
        if (count == 2)
            first = new_node;
        new_node -> data = num;
        ptr = new_node;
    }

    printf("The linked list is :\n");
    count = 1;
    ptr = first;
    while (count++ <= num_nodes) {
        printf ("%d  ", ptr -> data);
        ptr = ptr -> next;
    }

    return 0;
}