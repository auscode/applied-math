/* Regula Falsi Method */
#include <conio.h>
#include <process.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float f(float x)
{
    return cos(x) - x *exp(x);
}
void regula(float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
    *x = x0 - ((x1 - x0) / (fx1 - fx0)) * fx0;
    ++(*itr);
    cout << "Iteration no." << *itr << "x" << *x << endl;
}
int main()
{
    int itr = 0, maxitr;
    float x0, x1, x2, x3, aerr;

    cout << "\n Enter the value of x0,x1,"<< "allowed error, maximum iterations "<<endl;
            cin >>x0 >> x1 >> aerr >> maxitr;
    regula(&x3, x0, x1, f(x0), f(x1), &itr);
    do
    {
        if (f(x0) * f(x2) < 0)
            x1 = x2;
        else x0 = x2;
        regula(&x3, x0, x1, f(x0), f(x1), &itr);
        if (fabs(x3 - x2) < aerr)
        {
            cout << "\nAfter" << itr << "iterations,root "<<" = "<<x1<<endl;
            getch();
            exit(0);
        }
        x2 = x3;
    } while (itr < maxitr);
    cout << "Solution does not converge,"<< "iterations not sufficient "<<endl;
    getch();
        return 0;
}
