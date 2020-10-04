#include<stdio.h>
#include<malloc.h>
struct node
{
  int info;
  struct node *link;
}*top,*front,*rear;
void push(int data)
{
  struct node *temp;
  temp=malloc(sizeof(struct node));
  temp->info=data;
  temp->link=NULL;
  if(top==NULL)
      top=temp;
  else
    {
      temp->link=top;
      top=temp;
    }
}
void display()
{
  struct node *q;
  q=top;
  if(top==NULL)
    printf("All elements deleted!!\n");
  else
  {
    printf("The stack is:\t");
    while(q!=NULL)
    {
      printf("%d\t",q->info);
      q=q->link;
    }
    printf("\n");
  }
}

void pop()
{
  int item;
  if(top==NULL)
    printf("UNDERFLOW\n");
  else
    {
      item=top->info;
      top=top->link;
      printf("Poped item is:%d\n",item);
      display();
    }
}
void enqueue(int data)
{
  struct node *temp;
  temp=malloc(sizeof(struct node));
  temp->info=data;
  temp->link=NULL;
  if(front==NULL)
  {
    front=temp;
    rear=temp;
  }
  else
  {
    rear->link=temp;
    rear=temp;
  }
}
void display_q()
{
  struct node *q;
  q=front;
  if(front==NULL)
    printf("All elements deleted!!\n");
  else
  {
    printf("\nThe queue is:\t");
    while(q!=NULL)
    {
      printf("%d\t",q->info);
      q=q->link;
    }
  }
}

void dequeue()
{
  if(front==NULL)
    printf("Underflow\n");
  else
  {
    struct node *temp;
    temp=front;
    printf("Deleted item is:%d\n",front->info);
    front=front->link;
    free(temp);
    display_q();
  }
}
void main()
{
  int d,c;
  int k;
  int a=1;
  top=NULL;
  front=NULL;
  rear=NULL;
  printf("1.STACK\n2.QUEUE\n");
  printf("Enter choice:\t");
  scanf("%d",&k);
  while(a==1)
  {
  while(k==1)
  {
    printf("STACK\n");
    printf("11) PUSH\n");
    printf("12) POP\n");
    printf("13) DISPLAY\n");
    printf("Enter the subchoice:\t");
    scanf("%d",&c);
    switch(c)
    {
      case 11:printf("Enter data:");
               scanf("%d",&d);
               push(d);
               display();
               break;
      case 12:pop();
              break;
      case 13:display();
              break;
      default:printf("Invalid option\n");
    }
   printf("press 1 for stack, 2 for queue \n");
   scanf("%d",&k);
  }
  while(k==2)
  {
    printf("QUEUE\n");
    printf("21)ENQUEUE\n");
    printf("22)DEQUEUE\n");
    printf("23)DISPLAY\n");
    printf("Enter the subchoice:\t");
    scanf("%d",&c);
    switch(c)
    {
      case 21:printf("Enter data:");
              scanf("%d",&d);
              enqueue(d);
              display_q();
              break;
      case 22:dequeue();
              break;
      case 23:display_q();
              break;
    }
  printf("\npress 1 for stack, 2 for queue  \n");
  scanf("%d",&k);
  }
  }
}
