# include <stdio.h>

int array[] = {8, 14, 3, 17, 10, 2, 19, 7, 5, 12, 1, 16, 9, 4, 13, 20, 6, 15, 11, 18};

void insertionSort(int array[])
{
    int temp, j;
    for (int i = 1; i < 20; i++)
    {
        temp = array[i];
        for (j = i-1; j >= 0 && array[j] > temp; j--)
        {
            array[j+1] = array[j];
        }
        array[j+1] = temp;
    } 
}

int main()
{
    insertionSort(array);

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
}
