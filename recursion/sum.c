#include <stdio.h>

int add(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    a--;
    b++; 
    return add(a, b);
}

int main(void)
{
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("\nSum is: %d",add(a,b));

    return 0;
}