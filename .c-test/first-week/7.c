// 求两个数a和b的最大公约数和最小公倍数
#include <stdio.h>
int main()
{
    int a, b, t;
    int x, y, m;
    printf("请输入两个数:");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("最大公约数是:%d\n", a);
    m = x * y / a;
    printf("最小公倍数是:%d\n", m);
    return 0;
}