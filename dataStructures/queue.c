#include <stdio.h>

#define MAX 5
int queue[MAX];
int start = -1;
int end = -1;

void enQueue()
{
    if (start == (end + 1) % MAX)
    {
        printf("Queue is Full!");
        return;
    }
    else if (start == -1)
        start = 0;
    int el;
    printf("Enter Element: ");
    scanf("%d", &el);
    end++;
    queue[end] = el;
    printf("\n%d was EnQueued into the Queue!", el);
}
void deQueue()
{
    if (start < 0)
    {
        printf("Queue is Empty!");
        return;
    }
    int el = queue[start];
    start++;
    printf("%d was DeQueued!", el);
    if (start > end)
    {
        start = end = - 1;
    }
}
void peek()
{
    if (start < 0)
    {
        printf("Queue is Empty!");
        return;
    }
    printf("Front Element is %d", queue[start]);
}
void display()
{
    if (start < 0)
    {
        printf("Queue is Empty!");
        return;
    }
    printf("Queue: [");
    for (int i = start; i <= end; i++)
    {
        printf("%d", queue[i]);
        if (i == end)
        {
            continue;
        }
        printf(",");
    }
    printf("]");
}
void checkSize()
{
    if (start < 0)
    {
        printf("Size is Queue: 0");
        return;
    }
    printf("Size of Queue: %d", end - start + 1);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n***MENU***\n");
        printf("\n1. EnQueue");
        printf("\n2. DeQueue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Check Size");
        printf("\n6. Exit");
        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
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
            printf("\nInvalid Choice!\n");
            break;
        }
    }
}