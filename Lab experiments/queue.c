#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int que[size];
void enqueue(int ele)
{
	if(rear==size-1)
	printf("Queue is full.");
	else{
		if(front==-1&&rear==-1)
		front=rear=0;
		else
		rear=rear+1;
		que[rear]=ele;
	}
}
void dequeue()
	{
		if(front==-1&&rear==-1)
		printf("Queue is empty.");
		else{
			if(front==-1&&rear==-1)
			printf("Queue is empty.");
			else
			front=front+1;
		}
	}
void display()
{
	if(front==-1&&rear==-1)
	printf("Queue is empty.");
	else{
	  for(inti=front;i<=rear;i++)
		printf("%d",que[i]);
	}
}
int main()
 enqueue(25);
 enqueue(35);
 enqueue(45);
 dequeue();
 dequeue();
 enqueue(50);
 dequeue();
 dequeue();

