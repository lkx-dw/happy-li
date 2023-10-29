// 判断一个数n能否被3和5同时整除并输出
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if ((n % 3 == 0) || (n % 5 == 0))
        printf("YES:%d", n);
    else
        printf("NO!");
    return 0;
}