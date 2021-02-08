/**
*    author:  Haruto Yokoyama
*    created: 2021/02/08 16:09:49
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

#include "func_header.h"
using namespace std;

int main()
{
    //二分法
    //初期値
    double x1, x2;
    double x3;
    double condition1, condition2;

    x1 = 0.;
    x2 = 10.;

    for (int i = 0; i < 1000; i++)
    {
        x3 = (x2 - x1) / 2;
        while ((x2 - x1) < 0.0000001)
        {
            condition1 = func(x3) * func(x1);
            condition2 = func(x3) * func(x2);

            if (condition1 < 0)
            {
                x2 = x3;
            }
            else if (condition2 < 0)
            {
                x1 = x3;
            }
            else
            {
                cout << "initial value error!\n";
            }
        }
    }

    cout << "x=" << x3;

    return 0;
}