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
    /*二分法*/
    double xl, xr;
    double xc;
    double error;
    double condition1, condition2;

    //initial value
    xl = 0.;    //left
    xr = 10.;   //right
    error = 1.; //error_initial

    while (error > 0.0001)
    {
        xc = (xr + xl) / 2.;              //center
        condition1 = func(xc) * func(xl); //left*center
        condition2 = func(xc) * func(xr); //right*center

        if (condition1 < 0)
        {
            xr = xc;
        }
        else if (condition2 < 0)
        {
            xl = xc;
        }
        else
        {
            cout << "initial value error!\n";
            break;
        }
        error = fabs(xr - xl);
        cout << xc << "\n";
    }

    cout << "x=" << xc;

    return 0;
}