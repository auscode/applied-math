#include <conio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


float f(float x)
{
    return (x * x * x - 4 * x - 9);
}
void bisect(float *x, float a, float b, int *itr)
{
    *x = (a + b) / 2;
    ++(*itr);
    cout << "Iteration no." << setw(3) << *itr<< "x = " << setw(7) << setprecision(5) << *x << endl;
}
int main()
{
    int itr = 0, maxitr;
    float x, a, b, aerr, x1;

    cout<<"Name:- Harshit Mishra\nRollno. 00315607721"<<endl;
    cout << " \n Enter the value of a,b,"<< "allowed error, maximum iterations" << endl;
    cin >> a >> b >> aerr >> maxitr;
    bisect(&x1, a, b, &itr);
    do
    {
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        bisect(&x1, a, b, &itr);
        if (fabs(x1 - x) < aerr)
        {
            cout << " \n After " << itr << " iterations, root"<< "=" << setw(6) << setprecision(4)<< x1 << endl;
            getch();
            return 0;
        }
        x = x1;
    } while (itr < maxitr);
    cout << " Solution does not converge,"<< " iterations not sufficient" << endl;
    getch();
    return 1;
}
