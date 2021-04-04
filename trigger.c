/* stack implementation using static array*/

#include <stdio.h>
#define CAPACITY 5 //Pre-process macro
int stack[CAPACITY], top = -1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void tranverse(void);
void peek(void);

void main()
{
    int ch, item;
    while (1)
    {
        printf("1. Push \n");
        printf("2. Pop\n");
        printf("3. Peek \n");
        printf("4. Traverse \n");
        printf("5. Quit. \n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter element : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            if (item == 0)
            {
                printf("stack is underflow \n");
            }
            else
            {
                printf("poped item : %d", item);
            }
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            tranverse();
            break;
        case 5:
            exit(0);
            break;
        dafault:
            printf("Invalid input \n\n");
        }
    }
}
void push(int ele)
{
    if (isFull())
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("%d pushed", ele);
    }
    int isFull()
    {
        if (top == CAPACITY - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int pop()
{
    if (isEmpty())
    {
        return 0;
    }
    
    else
    {
        return stack[top--];
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if (isEmpty)
    {
        printf("Stack is empty \n");
    }
    else
    {
        printf("peek element : %d \n", stack[top]);
    }
}

void traverse()
{
    if (isEmpty())
    {
        printf("stack is empty ");
    }
    else
    {
        int i;
        printf("stack elements : \n");
        for (i = 0; i <= top; i++)
        {
            printf("%d \n", stack[i]);
        }
    }
}
