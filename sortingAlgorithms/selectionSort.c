#include <stdio.h>

int array[] = {8, 14, 3, 17, 10, 2, 19, 7, 5, 12, 1, 16, 9, 4, 13, 20, 6, 15, 11, 18}; 

void sort()
{
    int temp, minIndex;

    for (int i = 1; i < 5; i++)
    {
        minIndex = i;
        for (int j = i+1; j < 6; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main(void)
{

    sort(array);

    printf("Array: [");
    for (int i = 0; i < 20; i++)
    {
        printf("%d", array[i]);
        if (i == 20-1)
        {
            continue;
        }
        printf(",");
    }
    printf("]");

    return 0;
}