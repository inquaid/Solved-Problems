#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int myStack[STACK_LENGTH];
int top = EMPTY;

bool push(int value)
{
    if (top >= STACK_LENGTH)
        return false;
    top++;
    myStack[top] = value;
    return true;
}

int pop()
{
    if (top == EMPTY)
        return STACK_EMPTY;

    int result = myStack[top];
    top--;
    return result;
}

int main()
{
    push(54);
    push(5411);
    push(524);
    push(5);
    int t;
    while ((t = pop()) != STACK_EMPTY)
    {
        printf("%d ", t);
    }
    printf("\n");
}