#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct list{
	int data;
	struct list *next;
};

void create (struct list *,int n);
void display (struct list *);

int main(){
	int head_data,n;
	scanf("%d",&n);
	scanf("%d",&head_data);
	struct list *a;
	a->data = head_data;
	a->next = NULL;
	create(a,n);
	display(a);
}

void create(struct list *a,int n){
	int data1;
	struct list *temp,*b;
	temp = (struct list *)malloc(sizeof(struct list));
	temp = a;

	for(int i=1;i<n;i++){
		
		scanf("%d",&data1);
		
		b = (struct list *)malloc(sizeof(struct list));
		b->data = data1;
		b->next = NULL;
		temp->next = b;
		temp = temp->next;

	}
	// return a;
}

void display(struct list * p){
	while(p->next != NULL){
		printf("%d\n",p->data );
		 p = p->next;
	}
	printf("%d\n", p->data);
}

