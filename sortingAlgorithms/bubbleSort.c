#include <stdio.h>

int array[] = {8, 14, 3, 17, 10, 2, 19, 7, 5, 12, 1, 16, 9, 4, 13, 20, 6, 15, 11, 18}; 

void bubbleSort(int array[])
{
    int temp;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if (array[j+1] < array[j])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    } 
}

int main(void)
{
    bubbleSort(array);

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