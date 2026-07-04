#include <stdio.h>

int sumOf(int n) 
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOf(n - 1);
    }
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d", sumOf(n));

    return 0;
}