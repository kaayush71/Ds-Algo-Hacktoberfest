/* Delete at any Node(by position by value) */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
struct Node * deleteByvalue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
   sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 47;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 68;
    third->next = fourth;

    fourth->data = 71;
    fourth->next = fifth;

    fifth->data=56;
    fifth->next=sixth;

    sixth->data=84;
    sixth->next=NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 1);
    printf("\n\nLinked list after deletion at index\n");
    linkedListTraversal(head);
    head = deleteByvalue(head, 68);
    printf("\nLinked list after deletion by value\n");
    linkedListTraversal(head);
    return 0;
}
