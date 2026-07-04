#include <stdio.h>

int a = 0, b = 1;

void fibonacci(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("%d ", a);

    int temp = a + b;
    a = b;
    b = temp;

    fibonacci(n - 1);
}

int main(void)
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
