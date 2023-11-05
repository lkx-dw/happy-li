// 输出所有的“水仙花数”
#include <stdio.h>
int main()
{
    int m, a, b, c, sum = 0;
    for (m = 100; m < 1000; m++)
    {
        a = m % 10;
        b = (m / 10) % 10;
        c = (m / 100) % 10;
        sum = (a * a * a) + (b * b * b) + (c * c * c);
        if (m == sum)
        {
            printf("%d   ", m);
        }
    }
}