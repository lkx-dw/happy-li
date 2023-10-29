#include <stdio.h>
int main()
{
    int m = 1, n = 0;
    while (m <= 4)
    {
        for (n = 0; n < 2 * (m - 1); n++)
            printf(" ");
        printf("*****\n");
        m++;
    }
    return 0;
}