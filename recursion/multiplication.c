#include <stdio.h>

void printTable(int num, int t) 
{
    static int i = 1;

    if (i > t) 
    {
        i = 1;      //reset i to 1 for static behaviour 
        return;
    }

    printf("%d x %d = %d\n", num, i, num * i);

    i++;
    printTable(num, t);
}

int main() 
{
    int num, t;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter number of terms: ");
    scanf("%d", &t);

    printTable(num, t);

    return 0;
}