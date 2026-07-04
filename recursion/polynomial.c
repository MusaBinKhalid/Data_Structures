#include <stdio.h>

void makePoly()
{

}

int main(void)
{
    int degree;
    int p;
    int n[10];

    printf("Enter Degree: ");
    scanf("%d", &degree);

    for (int i = degree; i >= 0 ; i--)
    {
        printf("Enter coeff of x^%d: ", i);
        scanf("%d", &n[i]);    
    }

    for (int i = degree; i >= 0; i--)
    {
        if (n[i] != 0)
        {
            if (i <= degree && n[i] > 0)
            {
                printf(" + ");
                printf("%dx^%d", n[i], i);
            }    
        }
        // printf("\n");
    }

    return 0;
}