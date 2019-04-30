#include <stdio.h>
#include <stdlib.h>

// int front=-1,arr[100],rear = -1;
int n,arr[12];
struct node {
    int data;
    struct node *left , *right;
};

// void push(struct node * val){
//     arr[++rear] = (int)val;
//     if(front >= 5 ){
//         printf("cant push");
//     }
// }
// struct node * pop(){
//     struct node *addr;
//     if(front == -1){
//         printf("cant pop ...");
//         exit(0);
//     }
//     addr = (struct node *)arr[front];
//     front++;
//     return addr;
// }
struct node*  create(int i,struct node *root){
    if(i<n){
        if(root ==  NULL){
        root = (struct node *)malloc(sizeof(struct node ));
        root->data = arr[i];
        root->left = NULL;
        root->right = NULL;
        }
    root->left = create(2*i + 1,root->left);
    root->right = create(2*i +2,root->right);
    
    // return root;
    }
    return root;
}
void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node *root = NULL;

    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    root = create(0,root);
    inorder(root);

}
