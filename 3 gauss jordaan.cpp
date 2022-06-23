#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <math.h>
using namespace std;
#define N 4

int main()
{
    float a[N][N + 1], t;
    int i, j, k;
    cout << "\nEnter the elements of the argument matrix row wise" << endl;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
        {
            cin >> a[i][j];
        }
        for (j = 0; j < N; j++)
        {
            for (i = 0; i < N; i++)
            {
                if (i != j)
                {
                    t = a[i][j] / a[j][j];
                    for (k = 0; k < N + 1; k++)
                    {
                        a[i][k] -= a[j][k] * t;
                    }
                }
            }
        }
        cout << " \n The diagonal matrix is :-" << endl;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N + 1; j++)
            {
                cout << setw(9) << setprecision(4)
                     << a[i][j];
            }
            cout << endl;
        }
        cout << " \n The solution is :-" << endl;
        for (i = 0; i < N; i++)
        {
            cout << " x[" << setw(3) << i + 1 << "] ="
                 << setw(7) << setprecision(4) << a[i][N] / a[i][i] << endl;
        }
        getch();
        return 0;
    }
}
