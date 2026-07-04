#include <stdio.h>

void function (char x, char y, char z, int count)
{
    if (count == 6)
    {
        return;
    }
    printf("%c %c %c\n", x, y, z);

    char temp;
    if (count % 2 == 0)
    {
        temp = x;
        x = y;
        y = z;
        z = temp;
    }
    else 
    {
        temp = y;
        x = z;
        y = z;
        z = temp;
    } 
    function(x, y, z, count + 1);
}

int main(void)
{

    function('a', 'b', 'c', 0);

    return 0;
}