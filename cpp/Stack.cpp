
//1.Stack

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#define max 5	
 
int t=-1,stack[max];
void push();
void pop();
void display();

int main()
{
	int ch;
		printf("\n** Stack Menu **");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
	
	while(1)	
	{
	
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
 return 0;	
}
 
void push()
{
	int val;
	
	if(t==max-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		t=t+1;
		stack[t]=val;
	}
}
 
void pop()
{
	if(t==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[t]);
		t=t-1;
	}
}
 
void display()
{
	int i;
	
	if(t==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=t;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}


