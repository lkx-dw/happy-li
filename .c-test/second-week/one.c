#include <stdio.h>
int main()
{
    float x, y;
    int z;
    printf("请输入x的值：");
    scanf("%f", &x);
    if (x < 1)
        z = 0;
    if (1 <= x && x < 10)
        z = 1;
    if (x >= 10)
        z = 2;
    switch (z)
    {
    case (0):
        y = x;
        break;
    case (1):
        y = 2 * x - 1;
        break;
    case (2):
        y = 3 * x - 11;
        break;
    }
    printf("y=%f\n", y);
    return 0;
}