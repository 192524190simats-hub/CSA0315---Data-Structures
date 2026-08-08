#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*temp,*p; 
void insert(int ele)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		p=temp;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=temp;
		p=temp;
	}
	
void search(int key)
{
	int flag=0;
	for(p=head;p!=NULL;p=p->next)
	{
		if(key==p->data)
		{
			flag=1;
		}
	}
	if(flag==1)
	 printf("Available in the list");
	else
	 printf("Not Available in the list");
}
}
void display()
{
	for(p=head;p!=NULL;p=p->next)
	printf("->%d",p->data);
}
int main()
{
	insert(35);
	insert(25);
	insert(19);
	insert(80);
	display();
	search(19);
}
