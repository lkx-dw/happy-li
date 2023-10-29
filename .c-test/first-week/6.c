// 将100-200之间的素数输出,并求出素数个数。
/*#include <stdio.h>
int main()
{
    int i, j;
    int x = 1;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = 0;
                break;
            }
        }
        if (x)
        {
            printf("%d ", i);
            count++;
        }
        x = 1;
    }
    printf("\n素数的个数是:%d", count);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i, j;
    int count = 0;
    for (i = 101; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n素数的个数是:%d", count);
    return 0;
}