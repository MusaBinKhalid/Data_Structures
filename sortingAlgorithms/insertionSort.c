#include <stdio.h>
int array[] = {19, 13, 5, 9, 14, 17}; 

void printArray()
{
    printf("\nArray: [");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", array[i]);
        if (i == 6-1)
        {
            continue;
        }
        printf(",");
    }
    printf("]");
}


void sort()
{
    int temp, j;

    for (int i = 1; i < 6; i++)
    {
        temp = array[i];
        j = i - 1;

    for (j = i - 1; j >= 0 && array[j] > temp; j--)
    {
        array[j + 1] = array[j];
    }
    
    array[j + 1] = temp;
    printArray();
    }
}

int main(void)
{
    printArray();
    
    sort(array);

    return 0;
}