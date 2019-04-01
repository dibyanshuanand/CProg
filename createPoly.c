#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *link;
}

struct node *create(struct node*);

int main