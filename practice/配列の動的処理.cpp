/**
*    author:  Haruto Yokoyama
*    created: 2021/02/07 14:03:34
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <typeinfo>
using namespace std;

void ary2_def(int n1, int n2, double **&e)
{
    e = new double *[n1];
    e[0] = new double[n1 * n2];
    for (int i = 1; i < n1; i++)
    {
        e[i] = e[i - 1] + n2;
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            e[i][j] = 0.0;
        }
    }
}

void ary2_cal(int n1, int n2, double **e)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            e[i][j] = i + j * 0.1;
        }
    }
}

void ary2_show(int n1, int n2, const double **e)
{
    cout << "--- array ---"
         << "\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "\t" << e[i][j];
        }
        cout << "\n";
    }
}

void ary2_del(double **e)
{
    delete[] e[0];
    delete e;
}

int main()
{
    int n1 = 2, n2 = 3;
    double **a = NULL;

    ary2_def(n1, n2, a);
    cout << fixed << setprecision(1);
    ary2_show(n1, n2, (const double **)a);

    ary2_cal(n1, n2, a);
    ary2_show(n1, n2, (const double **)a);

    ary2_del(a);
    return 0;
}