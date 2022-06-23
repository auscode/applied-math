#include <iostream>
using namespace std;

void add(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void sub(int A[3][3], int B[3][3], int D[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            D[i][j] = A[i][j] - B[i][j];
}

void multiply(int A[3][3], int B[3][3], int E[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            E[i][j] = 0;
            for (k = 0; k < 3; k++)
                E[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main()
{
    int A[3][3] = {{7, 6, 8},
                   {0, 9, 4},
                   {1, 5, 1}};
    int B[3][3] = {{2, 9, 3},
                   {9, 2, 5},
                   {4, 5, 8}};
    int C[3][3];
    int D[3][3];
    int E[3][3];
    int i, j;
    add(A, B, C);
    cout << "Result matrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    sub(A, B, D);
    cout << "Result of subtraction of two matrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << D[i][j] << " ";
        cout << endl;
    }

    multiply(A, B, E);
    cout << "Result of multiplication of two matrix is \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << E[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
