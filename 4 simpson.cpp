#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float y(float x)
{
    return 1 / (1 + x * x);
}
int main()
{
    float x0, xn, h, s;
    int i, n;
    cout << "\n Enter x0, xn, no. of subintervals"
         << endl;
    cin >> x0 >> xn >> n;
    h = (xn - x0) / n;
    s = y(x0) + y(xn) + 4 * y(x0 + h);
    for (i = 3; i <= n - 1; i += 2)
        s += 4 * y(x0 + i * h) + 2 * y(x0 + (i - 1) * h);
    cout << "\n The value of integral is = "
         << setw(6) << setprecision(4)
         << (h / 3) * s << endl;
    getch();
    return 0;
}
