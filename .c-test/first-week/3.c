// 将a，b，c三个数按从大到小的顺序输出。
#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("请输入三个整数:");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a < b)
    {
        min = a;
        a = b;
        b = min;
    }
    if (a < c)
    {
        min = a;
        a = c;
        c = min;
    }
    if (b < c)
    {
        min = b;
        b = c;
        c = min;
    }
    printf("%d,%d,%d\n", a, b, c);
    return 0;
}