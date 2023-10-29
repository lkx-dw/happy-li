// 求方程ax^2+bx+c=0的根,若无实根则输出“NO!”
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    if (b * b - 4 * a * c >= 0)
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("x1=%f,x2=%f", x1, x2);
    }
    else
        printf("NO!");
    return 0;
}
