#include <stdio.h>
#include <stdlib.h>

void Insert();
void Show();

struct node
{
    int data;
    struct node *next;
    struct node *previous;
} *head = NULL, *tail = NULL;

int main21()
{
    int choice;
    while (1)
    {
        printf("\nEnter your choice from the below given options: ");
        printf("\n1. Insert\n2. Exit\n");

        scanf("%d", &choice);
        switch (choice)
        {
            case 1: Insert(); Show();
            break;
            case 2: exit (0);
            default: printf("\nInvalid choice!! Please enter again.");
        }
    }
}

void Insert()
{
    int x;
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter data item: ");
    scanf("%d", &x);
    temp -> data = x;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        temp -> next = head;
        temp -> previous = tail;
    }
    else
    {
        tail -> next = temp;
        temp -> previous = tail;
        temp -> next = head;
        tail = temp;
        head -> previous = tail;
    }

}

void Show()
{
    struct node *pointer_head = head, *pointer_tail = tail;
    printf("\nLinked list is \nFrom head to tail: ");
    do
    {
        printf("%d ", pointer_head -> data);
        pointer_head = pointer_head -> next;
    } while (pointer_head != head);
    printf("\nLinked list is \nFrom tail to head: ");
    do
    {
        printf("%d ", pointer_tail -> data);
        pointer_tail = pointer_tail -> previous;
    } while (pointer_tail != tail);
}
