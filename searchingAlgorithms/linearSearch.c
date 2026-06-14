#include <stdio.h>

int main(void)
{
    int len, num, a, count = 0;

    printf("Enter Length of Array: ");
    scanf("%d", &len);

    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter Element %d: ", i);
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("Enter Number to find: ");
    scanf("%d", &a);

    for (int j = 0; j < len; j++)
    {
        if (arr[j] == a)
        {
            printf("the number is at Index: %d\n", j);
            count++;
        }
    }

    if (count == 0)
    {
        printf("The Number doest not exist in the array!");
    }
    else
    {
        printf("The number appeared %d times!", count);
    }

    return 0;
}
