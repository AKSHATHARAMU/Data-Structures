#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void display(struct node *details);
struct node *head,*first,*second,*third,*temp;
int main(void) {
	struct node *details;
	head=(struct node*)malloc(sizeof (struct node));
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	//temp=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->next=first;
	first->data=20;
	first->next=second;
	second->data=30;
	second->next=third;
	third->data=40;
	third->next=NULL;
	temp=head;
	display(details);
	return 0;
}
	void display(struct node *details)
	{
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
