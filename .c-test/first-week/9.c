// 有三个数，判断能否以其为边组成一个三角形。
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) || (a + c > b) || (b + c > a))
        printf("YES!");
    else
        printf("NO!");
    return 0;
}