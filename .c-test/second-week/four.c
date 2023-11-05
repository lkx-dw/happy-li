// 求1！+2！+3！+4！+5！+...+20！
#include <stdio.h>
int main()
{
    int i, j, sum1, sum2 = 0;
    for (i = 1; i <= 20; i++)
    {
        for (j = 1, sum1 = 1; j <= i; j++)
        {
            sum1 = sum1 * j;
        }
        sum2 = sum2 + sum1;
    }
    printf("%d", sum2);
    return 0;
}