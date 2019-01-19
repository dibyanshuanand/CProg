#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* create (int);
void search(struct node*, int);

int main () {
    struct node *head = NULL;
    int num_node;
    int num_search;
    printf("Enter the number of nodes : \n");
    scanf("%d", &num_node);
    printf("\nCreating Linked List \n");
    head = create(num_node);
    printf("\nLinked List created\n");

    printf("\nEnter the number to be searched : ");
    scanf("%d", &num_search);
    search(head, num_search);
    printf("\nEnd\n");

    return 0;    
}

struct node* create(int num) {
    struct node *first = NULL, *ptr = NULL, *new_node;
    int count = 1;
    int data;
    printf("Enter the data :\n");
    while (count++ <= num) {
        new_node = (struct node*)malloc(sizeof(struct node));
        if (ptr != NULL)
            ptr -> link = new_node;
        scanf("%d", &new_node -> data);
        if(first == NULL)
            first = new_node;
        ptr = new_node;
    }
    ptr -> link = NULL;
    return first;
}

void search (struct node *start, int item) {
    struct node *ptr1 = start, *loc = NULL;
    int count = 0;
    while (ptr1 -> link != NULL && loc == NULL) {
        if (ptr1 -> data == item)
            loc = ptr1;
        ptr1 = ptr1 -> link;
        count++;
    }
    if (ptr1 -> data == item) {
        loc = ptr1;
        count++;
    }
    if (loc == NULL)
        printf("\nItem not found\n");
    else
        printf("\nItem found at node %d\n", count);

    return;
}