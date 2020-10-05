#include<stdio.h>
#include<stdlib.h>
int a[10][10];
int q[100],s[100],top=-1,rear=-1,front=-1;

void build_graph( int v)
{
	int i,j;
	for(i=1;i<=v;++i)
		for(j=1;j<=v;++j)
		{
			printf("Is %d linked to %d (1 if true, 0 if false):", i,j);
			scanf("%d", &a[i][j]);
		}
}
void push(int data)
{ if(top==10)
     { printf("overflow\n");
	return;}
  else
	{top++;
         s[top]=data;
	}
}
int pop()
{int r;
if(top==-1)
 { printf("underflow");
   return 0;}
else 
  {r=s[top];
  top--;
  return r;}
}

void enqueue(int data)
{if(rear==10)
    printf("overflow\n");
      
 else
   { rear++;front=0;
     q[rear]=data;
    }
}
int dequeue()
{ int r;
   if(front==-1)
  {  printf("empty\n");
    return -1;}
   else
   {r=q[front];
    front++;
     return r;}
}

void BFS(int vis[ ],int n)
{
  int vx,i,j;
   printf("enter the vertex to start the search ");
   scanf("%d",&vx);
   printf("\n");
   printf("%d",vx);
   enqueue(vx);
   vis[vx]=1;
   while(front!=-1)
   {
      vx=dequeue();
      for(i=0;i<n;i++)
	{ if(a[vx][i]==1 && vis[i]==0)
		{  printf("%d",i);
                   enqueue(vx);
           	   vis[i]=1;
		}
	}
    }
}

void DFS(int vis[ ],int n)
{int vx,i;
  printf("enter the starting vertex :");
   scanf("%d",&vx);
   push(vx);
   while(top!=-1)
	{vx=pop();
         if(vis[vx]==0)
		{ printf("%d",vx);
                  vis[vx]=1;
		}
	else
 		continue;
	 for(i=0;i<n;i++)
		{ if(a[vx][i] ==1 && vis[i]==0)
		   push(i);
		}
	}
}





void main()
{
	int i, v, True=1, ch, vis[100];
	printf("Enter number of vertices: ");
	scanf("%d", &v);



	build_graph(v);	

	while(True)
	{
		for(i=1; i<=v; ++i)
			vis[i]=0;
		printf(" 1. BFS\n2. DFS\n Enter choice: ");
		scanf("%d", &ch);
		if(ch==1)
		{
			BFS(vis, v);
		}

		if(ch==2)
		{
			DFS(vis, v);
		}

		printf("\n\n\nDo you want to continue: ");
		scanf("%d", &ch);
		if (ch==0)
			break;
	}
}
