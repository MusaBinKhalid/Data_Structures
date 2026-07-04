#include <stdio.h>

int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        int x = n * power(n, m - 1);
        return x;
    }
}

int main(void)
{
    int n, pow;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Enter Power: ");
    scanf("%d", &pow);

    int result = power(n, pow);

    printf("%d Raised-to-Power %d is %d", n, pow, result);

    return 0;
}