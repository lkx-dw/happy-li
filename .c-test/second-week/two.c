#include <stdio.h>
int main()
{
    float s;
    char g;
    printf("请输入百分制成绩：");
    scanf("%f", &s);
    if (s < 60)

        g = 'E';

    if (s >= 90)
        g = 'A';
    if (80 <= s && s <= 89)
        g = 'B';

    if (70 <= s && s <= 79)
        g = 'C';
    if (60 <= s && s <= 69)
        g = 'D';

    switch (g)
    {
    case ('A'):
        printf("%c\n", g);
        break;
    case ('B'):
        printf("%c\n", g);
        break;
    case ('C'):
        printf("%c\n", g);
        break;
    case ('D'):
        printf("%c\n", g);
        break;
    case ('E'):
        printf("%c\n", g);
        break;
    default:
        printf("error");
    }
    return 0;
}