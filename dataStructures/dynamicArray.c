#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// createArray
void createArray(DynamicArray *arr, int capacity)
{
    arr->data = (int*) calloc(capacity, sizeof(int));
    arr->size = 0;
    arr->capacity = capacity;
}

// printArray
void printArray(DynamicArray *arr)
{
    printf("\n[");

    for (int i = 0; i < arr->size; i++)
    {
        printf("%d", arr->data[i]);
        if (i != arr->size - 1)
            printf(", ");
    }

    printf("]\n");
}

// push
void push(DynamicArray *arr, int value)
{
    if (arr->size == arr->capacity)
    {
        arr->capacity *= 2;
        arr->data = (int*) realloc(arr->data, arr->capacity * sizeof(int));

        if (arr->data == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }

    arr->data[arr->size] = value;
    arr->size++;
}

// pop
void pop(DynamicArray *arr)
{
    if (arr->size == 0)
    {
        printf("Array is empty\n");
        return;
    }

    arr->size--;
}

// insert at index
void insert(DynamicArray *arr, int index, int value)
{
    if (index < 0 || index > arr->size)
    {
        printf("Invalid index\n");
        return;
    }

    if (arr->size == arr->capacity)
    {
        arr->capacity *= 2;
        arr->data = (int*) realloc(arr->data, arr->capacity * sizeof(int));
    }

    for (int i = arr->size; i > index; i--)
    {
        arr->data[i] = arr->data[i - 1];
    }

    arr->data[index] = value;
    arr->size++;
}

// delete at index
void deleteAt(DynamicArray *arr, int index)
{
    if (index < 0 || index >= arr->size)
    {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < arr->size - 1; i++)
    {
        arr->data[i] = arr->data[i + 1];
    }

    arr->size--;
}

// getSize
int getSize(DynamicArray *arr)
{
    return arr->size;
}

// getMaxSize
int getMaxSize(DynamicArray *arr)
{
    return arr->capacity;
}

// isEmpty
int isEmpty(DynamicArray *arr)
{
    return arr->size == 0;
}

// get element
int get(DynamicArray *arr, int index)
{
    if (index < 0 || index >= arr->size)
    {
        printf("Invalid index\n");
        return -1;
    }

    return arr->data[index];
}

// clear
void clear(DynamicArray *arr)
{
    arr->size = 0;
}

int main()
{
    DynamicArray arr;

    createArray(&arr, 2);

    push(&arr, 10);
    push(&arr, 20);
    push(&arr, 30);

    printArray(&arr);

    insert(&arr, 1, 99);
    printArray(&arr);

    deleteAt(&arr, 2);
    printArray(&arr);

    pop(&arr);
    printArray(&arr);

    printf("Size: %d\n", getSize(&arr));
    printf("Capacity: %d\n", getMaxSize(&arr));
    printf("Is Empty: %d\n", isEmpty(&arr));
    printf("Element at 0: %d\n", get(&arr, 0));

    clear(&arr);
    printArray(&arr);

    free(arr.data);

    return 0;
}