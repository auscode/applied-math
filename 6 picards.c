#include <stdio.h>
#include <math.h>
#include <conio.h>
#define dy / dx = 1 + xy
#define Y1(x) (1 + (x) + pow(x, 2) / 2)
#define Y2(x) (1 + (x) + pow(x, 2) / 2 + pow(x, 3) / 3 + pow(x, 4) / 8)
#define Y3(x) (1 + (x) + pow(x, 2) / 2 + pow(x, 3) / 3 + pow(x, 4) / 8 + pow(x, 5) / 15 + pow(x, 6) / 48)
void main()
{
    double y1[20], y2[20], y3[20], a, n, h, i;
    int j;
    printf("\nEnter the value of range: ");
    scanf("%lf %lf", &a, &n);
    printf("\n\nEnter the h: ");
    scanf("%lf", &h);
    for (i = a, j = 0; i <= n; i = i + h, j++)
    {
        y1[j] = Y1(i);
        y2[j] = Y2(i);
        y3[j] = Y3(i);
    }
    printf("\nX |");
    for (i = a; i <= n; i = i + h)
    {
        printf(" %.3lf", i);
    }
    printf("\n--------------------------------------------------------------------------------");
    printf("\n\nY1|");
    for (i = a, j = 0; i <= n; i = i + h, j++)
    {
        printf(" %.3lf", y1[j]);
    }
    printf("\n\nY2|");
    for (i = a, j = 0; i <= n; i = i + h, j++)
    {
        printf(" %.3lf", y2[j]);
    }
    printf("\n\nY3|");
    for (i = a, j = 0; i <= n; i = i + h, j++)
    {
        printf(" %.3lf", y3[j]);
    }
    getch();
}
