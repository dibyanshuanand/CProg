#include <stdio.h>

struct node {
    int data1;
    int data2;
    struct node *link;
};

int main(int argc, char const *argv[])
{
    struct node ob1; // Node 1
    //Initialization
    ob1.data1 = 10;
    ob1.data2 = 20;
    ob1.link = NULL;

    struct node ob2;// Node 2
    // Initialization
    ob2.data1 = 30;
    ob2.data2 = 40;
    ob2.link = NULL;

    // Linking ob1 to ob2
    ob1.link = &ob2;

    printf("%d\n", ob1.link -> data1);
    printf("%d\n", ob1.link -> data2);
    
    return 0;
}
