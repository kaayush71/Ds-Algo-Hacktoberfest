//Importing Libraries

#include<stdio.h>
#include<stdlib.h>


// Making the node for the linked list using Structure
struct node{
        int data;                   // It Stores the data of a node
        struct node * next;         // It stores the pointer for the next node
    };                                   

struct node *head,*next_node,*temp;   // Declaring some objects of the structure node


void insert_beg()
{
    next_node = (struct node*)malloc(sizeof(struct node));   // Making a node
    printf("Enter Data : ");
    scanf("%d", &next_node->data);                  // taking the data of node
    if(head==0)                                     // checking if node is empty or not
    {
        next_node->next = 0;
        head = next_node;
        temp = next_node;
    }
    else
    {
        next_node->next = head;
        head = next_node;
    }
    
}


void insert_pos()                       // Inserting the node at a given position
{
    int pos, i=1;
    int count = 0;
    temp = head;
    printf("Enter the position after which Node to be inserted : \n");
    scanf("%d",&pos);
    while(temp != 0)
    {
        count++;
        temp = temp->next;
    }
    if(pos>count || pos == 0)
    {
        printf("Invalid Position\n");
    }
    else{
        temp = head;
        next_node = (struct node*)malloc(sizeof(struct node));
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter Data : ");
        scanf("%d", &next_node->data);
        next_node->next = temp->next;
        temp->next = next_node;
    }

}

void print_node(){              // Printing the linked List.
    temp = head;
    if(temp == 0)
    {
        printf("Linked List Underflow\n");
    }
    else{
    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    }
}


int main()                  // Main body
{
    head = 0;
    int choice;             // Taking the choice
    while(1)
    {
    printf("Enter 1 to enter the Node In the Beginning\n");   // taking the choice from user
    printf("Enter 2 to Insert at a Position\n");
    printf("Enter 3 to print Linked List\n");
    printf("Enter 0 to exit \n: ");
    scanf("%d", &choice);
    switch(choice)                              // Switching cases according to the entered choice
        {
            case 1:
                insert_beg();                   // calling the function for inserting the node at begining
                break;
            case 2:
                insert_pos();                   // calling the function for inserting the node at given position
                break;
            case 3:
                print_node();                   // Printing the linked list.
                break;
            case 0:
                print_node();                   // Exiting the loop and printing the linked list.
                exit(1);
                break;
            default:
                printf("Enter Again !!\n");     // if entered choice is not valid.
        }
    }
    return 0;
}