#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node *next;
    bool even;
} Node;

bool isEven(int n)
{
    return !(n & 1);
}

int main()
{
    Node *n, *head = NULL, *temp, *temp2, *current, *prev, *next;
    int times;
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        n = (Node *)malloc(sizeof(Node));
        scanf("%d", &n->data);
        n->next = NULL;
        n->even = isEven(n->data);

        if (head == NULL)
            head = n;
        else
            temp->next = n;
        temp = n;
    }
    temp = head;
    while (temp != NULL)
    {
        // printf("%d ", temp->data);
        if (temp->even)
        {
            temp2 = temp;
            while (temp2->even && temp2 != NULL)
            {
                temp2 = temp2->next;
            }
            current = temp;
            prev = NULL;
            while (current != NULL)
            {
                next = current->next;

                current->next = prev;
                prev = current;

                current = next;
            }
            head = prev;
        }

        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}