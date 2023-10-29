// 求1+2+3+…+100。
#include <stdio.h>
int main()
{
    int a = 1, sum = 0;
    while (a <= 100)
    {
        sum = sum + a;
        a++;
    }
    printf("sum is %d", sum);
    return 0;
}