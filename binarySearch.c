#include <stdio.h>

int array[] = {1, 2, 5, 7, 8, 9, 10, 12, 34, 56, 104, 110, 125, 155, 250, 350, 390, 450, 650, 750, 1000};

void binarySearch(int element, int left, int right)
{
    if (left > right)
    {
        printf("\nElement NOT Found!");
        return;
    }
    
    int mid = left + (right - left)/ 2;
    printf("\nMiddle: %d", array[mid]);

    if (array[mid] == element)
    {
        printf("\n\n--> Element FOUND at Index: %d", mid); 
        return;       
    }
    else if (array[mid] > element)
    {
        right = mid - 1;
    }
    else if (array[mid] < element)
    {
        left = mid + 1;
    }
    binarySearch(element, left, right);
}

int main(void)
{
    int element; int left = 0; int right = 20;
    printf("Enter Element to Search: ");
    scanf("%d", &element);

    binarySearch(element, left, right);

    return 0;
}
