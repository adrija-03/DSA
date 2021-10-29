#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
}*first = NULL;
void create(struct Node* t, int value)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = value;
    p->next = NULL;
    struct Node* q = t;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = p;
}
void Display(struct Node *p) {
	while(p!=NULL) {
		printf("%d ",p->data);
		p = p->next;
	}
}
void rotate(struct Node *p, int k) {
	struct Node *q = first;
	int c = k;
	k;
	while(k!=0) {
	p = p->next;
	k--;
	}
	while(p!=NULL) {
		printf("%d ",p->data);
		p = p->next;
	}
	p = first;
	while(c!=k) {
		printf("%d ",p->data);
		p = p->next;
		k++;
	}
}
int main() {
	struct Node *temp;
	int c = 0, k;
    int value;
    while (c != -1)
    {
        printf("Enter the element in node\n");
        if(first != NULL)
         {
               scanf("%d",&value);
               create(first, value);
             }
         else{
                scanf("%d",&value);
                first = (struct Node*)malloc(sizeof(struct Node));
                first->data = value;
                first->next = NULL;
           }
           printf("To exit enter -1 else enter 1\n");
           scanf("%d",&c); 
        }
        printf("Original list : \n");
	Display(first);
	printf("\n");
	printf("enter the value of k : \n");
	scanf("%d",&k);
	rotate(first,k);
	printf("\n");
	return 0;
}