#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *link;
};

struct node* create(int num);
void insert(struct node*, int, int);
void display(struct node*, int);

int main () {
    struct node *head;
    int num_node;
    int dataS, dataI;
    printf("Enter the number of nodes : \n");
    scanf("%d", &num_node);
    printf("\nCreating Linked List \n");
    head = create(num_node);
    printf("\nLinked List created\n");

    printf("Enter the data before which data is to entered : ");
    scanf("%d", &dataS);
    printf("Enter the data to be entered : ");
    scanf("%d", &dataI);
    insert(head, dataS, dataI);
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

void insert(struct node *first, int num_search, int num_insert) {
    struct node *new_node, *pre_ptr, *ptr, *loc = NULL;
    ptr = first;

    new_node = (struct node*)malloc(sizeof(struct node));
    if (first == NULL) {
        first = new_node;
        new_node -> data = num_insert;
        new_node -> link = NULL;
        return;
    }
    while (loc == NULL) {
        if (ptr -> data == num_search) {
            loc = ptr;
            new_node -> data = num_insert;
            new_node -> link = ptr;
            pre_ptr -> link = new_node;
        }
        pre_ptr = ptr;
        if (ptr -> link == NULL)
            break;
        ptr = ptr -> link;
    }
    if (loc == NULL)
        printf("Number not found\nInsert failed\n");

    return;
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
