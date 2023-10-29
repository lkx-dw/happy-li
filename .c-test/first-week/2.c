// 编写一个程序，运行时输入a，b，c三个值，输出其中值最大者。
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("请输入三个整数:\n");
    scanf("%d,%d,%d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("最大值是: %d\n", max);
    return 0;
}