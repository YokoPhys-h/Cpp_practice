/**
*    author:  Haruto Yokoyama
*    created: 2021/02/13 21:30:35
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
    /*ニュートンラフソン法*/

    double error = 1.;
    double xp, xs;

    xp = 10.; //初期値

    while (error > 0.00000001)
    {
        xp = xs;
        xs = xp - func(xp) / funcd(xp);
        error = abs(xs - xp);

        cout << setprecision(10);
        cout << xs << "\n";
    }

    return 0;
}