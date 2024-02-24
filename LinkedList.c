#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL, *n, *temp, *pos;
    int t = 5;
    while (t--)
    {
        n = (Node *)malloc(sizeof(Node));
        scanf("%d", &n->data);
        n->next = NULL;
        if (head == NULL)
        {
            head = n;
            temp = n;
        }
        else
        {
            temp->next = n;
            temp = n;
        }
    }

    n = (Node *)malloc(sizeof(Node));
    n->data = 11;
    n->next = head;
    head = n;

    n = (Node *)malloc(sizeof(Node));
    n->data = 555;

    temp = head;
    for (int i = 0; i < 2; i++)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;

    n = (Node *)malloc(sizeof(Node));
    n->data = 99;

    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = NULL;

    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}