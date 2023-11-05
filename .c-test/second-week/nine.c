// 用筛选法求100之内的素数
#include <stdio.h>
int main()
{
    int s[100], i, n, j;
    for (i = 0; i < 100; i++)

    {
        s[i] = i + 1;
    }
    s[0] = 0;
    for (n = 1; n < 100; n++)
    {
        for (j = 2; j < n + 1; j++)
        {
            if ((s[n] % j) == 0)
            {
                s[n] = 0;
                break;
            }
        }
    }
    for (n = 1; n < 100; n++)
    {
        if (s[n] != 0)
            printf("%d ", s[n]);
    }
    return 0;
}