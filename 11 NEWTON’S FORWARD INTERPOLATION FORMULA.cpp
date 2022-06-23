/* Newton Forward Interpolation Method */
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define MAXN 100
#define ORDER 4
int main()
{
    float ax[MAXN + 1], ay[MAXN + 1], diff[MAXN + 1][ORDER + 1],
        nr = 1.0,
        dr = 1.0, x, p, h, yp;
    int n, i, j, k;
    cout << "\n Enter the value of n"
         << endl;
    cin >> n;
    cout << "\n Enter the values in form of x, y"
         << endl;
    for (i = 0; i <= n; i++)
        cin >> ax[i] >> ay[i];
    cout << "\n Enter the values of x for which value of y is wanted " <<endl;
            cin >>x;
    h = ax[1] - ax[0];
    for (i = 0; i <= n - 1; i++)
        diff[i][1] = ay[i + 1] - ay[i];
    for (j = 2; j <= ORDER; j++)
        for (i = 0; i <= n - j; i++)
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
    i = 0;
    while (!(ax[i] > x))
        i++;
    i--;
    p = (x - ax[i]) / h;
    yp = ay[i];
    for (k = 1; k <= ORDER; k++)
    {
        nr *= p - k + 1;
        dr *= k;
        yp += (nr / dr) * diff[i][k];
    }
    cout << "\n When x = "
         << setw(6) << setprecision(1)
         << x << " y = "
         << setw(6) << setprecision(2)
         << yp << endl;
    getch();
    return 0;
}
