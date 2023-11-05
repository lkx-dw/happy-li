// 找出1000之内的所有完数，并按如下格式输出：6 its factors are 1,2,3
#include <stdio.h>
int main()
{
    int i, j, n, sum = 0;
    int k = 0;
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        k = 0;
        for (j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d its factors are:", i);
            for (n = 1; n < i; n++)
            {
                if (i % n == 0)
                {
                    k++;
                    if (k == 1)
                        printf("%d", n);
                    else
                        printf(",%d", n);
                }
            }
            printf("\n");
        }
    }
}