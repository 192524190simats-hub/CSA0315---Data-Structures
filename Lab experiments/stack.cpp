#include<stdio.h>
#define size 5
int stk[size],top=-1;//global declaration
void push(int ele)
{
	if(top==size-1){
		printf("Stack is overflow");
	}
	else{
		top=top+1;
		stk[top]=ele;
	}
}
void pop()
{
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		top=top-1;
	}
}
void display()
{
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		for(int i=top;i>=0;i--)
		printf("%d\n",stk[i]);
	}
}
int main()
{
push(25);
push(12);
push(85);
push(12);
pop();
push(16);
push(70);
pop();
pop();
pop();
}
