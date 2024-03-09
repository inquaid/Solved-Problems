#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include "linkedlist.h"
typedef struct Node
{
    int data;
    struct Node *tail;
} Node;
Node *scan(Node **head)
{
    Node *n, *temp;
    int i = 0, pos;
    printf("Size = ");
    scanf("%d", &pos);
    while (i < pos)
    {
        n = (Node *)malloc(sizeof(Node));
        printf("Node: ");
        scanf("%d", &n->data);
        n->tail = NULL;
        if (*head == NULL)
        {
            *head = n;
        }
        else
        {
            temp->tail = n;
        }
        temp = n;
        i++;
    }
    return *head;
}

Node *SortedScan(Node **head)
{
    Node *n, *temp;
    int ps, i = 0;
    printf("Enter size: ");
    scanf("%d", &ps);
    while (i < ps)
    {
        n = (Node *)malloc(sizeof(Node));
        printf("Enter Node: ");
        scanf("%d", &n->data);
        n->tail = NULL;
        if (*head == NULL || n->data < (*head)->data)
        {
            n->tail = *head;
            *head = n;
        }
        else
        {
            temp = *head;
            while (temp->tail != NULL && n->data > temp->tail->data)
            {
                temp = temp->tail;
            }
            n->tail = temp->tail;
            temp->tail = n;
        }

        i++;
    }
    return *head;
}

void add(Node **head)
{
    Node *temp, *value;
    value = (Node *)malloc(sizeof(Node));
    temp = *head;
    int ps, i = 0;
    printf("Adding position: ");
    scanf("%d", &ps);
    printf("Value: ");
    scanf("%d", &value->data);
    while (i < ps - 2 && temp != NULL)
    {

        temp = temp->tail;

        i++;
    }
    value->tail = temp->tail;
    temp->tail = value;
}

void dlt(Node **head)
{
    Node *temp, *freee;
    temp = *head;
    int pos, i = 0;
    printf("Deleting position: ");
    scanf("%d", &pos);
    while (i < pos - 2 && temp != NULL)
    {
        temp = temp->tail;
        i++;
    }
    freee = temp->tail;
    temp->tail = temp->tail->tail;
    free(freee);
}

void reverse(Node **head)
{
    Node *current, *prev, *next;

    current = *head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->tail;

        current->tail = prev;
        prev = current;

        current = next;
    }
    *head = prev;
}

bool isLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->tail != NULL)
    {
        slow = slow->tail;
        fast = fast->tail->tail;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

void print(Node *head)
{
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->tail;
    }
}

void DeleteHereToThere(Node *head, int m, int n)
{
    Node *current = head, *temp;
    int cnt;
    while (current)
    {
        // skipping m nodes
        for (cnt = 1; cnt < m && current != NULL; cnt++)
        {
            current = current->tail;
        }
        // if end then break
        if (current == NULL || current->tail == NULL)
            break;
        // deleting till n
        temp = current->tail;
        for (cnt = 0; cnt < n && temp != NULL; cnt++)
        {
            // Node *toDelete = temp;
            temp = temp->tail;
            // delete toDelete;
        }
        // linking mth node to (m+n+1)th node
        current->tail = temp;
        current = temp;
    }
}