/*输入 n 值，输出如下图所示高和上底均为 n 的等腰空心梯形。*/
#include <stdio.h>
int main()
{
    int n, a, i, j, b, c, d;
    printf("请输入n的值：");
    scanf("%d", &n);
    for (a = 1; a <= (n - 1); a++)
    {
        printf(" ");
    }
    for (b = 1; b <= (n); b++)
    {
        printf("*");
    }
    for (c = 1; c <= (n - 1); c++)
    {
        printf(" ");
    }
    printf("\n");
    for (i = 2; i <= (n - 1); i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= (n + 2 * i - 4); j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (d = 1; d <= (3 * n - 2); d++)
    {
        printf("*");
    }
    return 0;
}