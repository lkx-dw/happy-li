#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, a, b, c, d;
    printf("请输入一点的坐标：");
    scanf("%f,%f", &x, &y);
    a = x - 2;
    b = x - (-2);
    c = y - 2;
    d = y - (-2);
    if (fabs(a) <= 1 || fabs(b) <= 1)
    {
        if (fabs(c) <= 1 || fabs(d) <= 1)
        {
            printf("塔的高度是10米\n");
        }
        else
            printf("塔的高度是0\n");
    }
    else
        printf("塔的高度是0\n");
    return 0;
}