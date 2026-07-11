#include <stdio.h>
#define MAX 5
int top = -1;
int stack[MAX];

void peek()
{
    if (top < 0)
    {
        printf("\nStack is Empty!\n");
        return;
    }
    printf("Top Element is %d\n", stack[top]);
}
void push()
{
    if (top == MAX - 1)  //MAX = 5;
    {
        printf("Stack OverFlow!\n");
        return;
    }
    int n;
    printf("\nEnter Element to Push: ");
    scanf("%d", &n);
    top++;
    stack[top] = n;
}
void pop()
{
    if (top < 0)    
    {
        printf("\nStack UnderFlow!\n");
        return;
    }
    int element = stack[top];
    printf("\n%d was Popped from the Stack!\n", element);
    top--;
}
void display()
{
    if (top < 0)    
    {
        printf("\nStack is Empty!\n");
        return;
    }
    printf("\nStack: [");
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
        if (i == 0)
        {
            continue;    
        }
        printf(",");
    }
    printf("]\n");
}
void checkSize()
{
    printf("\nSize of Stack: %d\n", top+1);
}

int main(void)
{
    int choice;

    while (1)
    {
        printf("\n***MENU***");
        printf("\n\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Check Size");
        printf("\n6. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            checkSize();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid Choice!");
            break;
        }
    }

    return 0;
}