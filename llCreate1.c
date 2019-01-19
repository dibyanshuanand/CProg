#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *link;
};

struct node* create(int num);
void display(struct node*, int);

int main () {
    struct node *head = NULL;
    int num_node;
    printf("Enter the number of nodes : \n");
    scanf("%d", &num_node);
    printf("\nCreating Linked List \n");
    head = create(num_node);
    printf("\nLinked List created\n");
    display(head, num_node);
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

void display (struct node *start, int num) {
    if (start == NULL) {
        printf("Linked List does not exist\n");
        return;
    }
    struct node *ptr;
    ptr = start;
    printf("\nThe Linked List :\n");
    while (ptr -> link != NULL) {
        printf("%d  ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("%d\n", ptr -> data);

    return;
}
