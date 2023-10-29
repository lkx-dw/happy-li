// 计算10年后我国国民生产总值与现在相比增长多少百分比
#include <stdio.h>
#include <math.h>
int main()
{
    float p, r;
    int n = 10;
    r = 0.07;
    p = pow(1 + r, n);
    printf("%f", p * 100);
    return 0;
}