#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct Stack
{
    Node *head, *tail;
    int count;
} Stack;

void InitializeStack(Stack **stack)
{
    *stack = (Stack *)malloc(sizeof(Stack));
    (*stack)->head = NULL;
    (*stack)->tail = NULL;
    (*stack)->count = 0;
}

void push(Stack *stack, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = stack->tail;
    newNode->right = NULL;

    if (stack->tail != NULL)
    {
        stack->tail->right = newNode;
    }
    else
    {
        stack->head = newNode;
    }

    stack->tail = newNode;
    stack->count++;
}

bool empty(Stack *stack)
{
    return stack->count == 0;
}

int pop(Stack *stack)
{
    if (empty(stack))
    {
        return INT_MIN;
    }

    Node *temp = stack->tail;
    int result = temp->data;

    if (stack->count == 1)
    {
        stack->head = NULL;
        stack->tail = NULL;
    }
    else
    {
        stack->tail = temp->left;
        stack->tail->right = NULL;
    }

    free(temp);
    stack->count--;
    return result;
}

void print(Stack *stack)
{
    Node *current = stack->head;
    while (!empty(stack))
    {
        printf("%d ", pop(stack));
    }
    printf("\n");
}

int main()
{
    Stack *s1, *s2;
    InitializeStack(&s1);
    InitializeStack(&s2);

    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    push(s1, 4);
    push(s1, 5);

    print(s1);

    push(s2, 11);
    push(s2, 22);
    push(s2, 31);
    push(s2, 42);
    pop(s2);
    push(s2, 51);

    print(s2);
    free(s1);
    free(s2);

    return 0;
}
