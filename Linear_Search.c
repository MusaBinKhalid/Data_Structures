#include<stdio.h>

int main(void)
{

    int n, target;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element for Index %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nEnter Element to Search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            printf("Element found at Index: %d", i);
        }
    }

    return 0;
}