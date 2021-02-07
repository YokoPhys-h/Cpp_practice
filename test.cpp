/**
*    author:  Haruto Yokoyama
*    created: 2021/02/07 16:14:01
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

#include "VecD3.h"

using namespace std;

int main()
{
    VecD3 v1(3.0, 4.0, 5.0), v2(3.0, 2.0, 1.0);

    cout << "&v1=" << &v1 << "\n";
    cout << "v1=";
    v1.show();
    cout << "v2=";
    v2.show();

    VecD3 v3;

    v3 = v1.add(v2);
    cout << "v1+v2=";
    v3.show();

    VecD3 v4;
    v4 = v1.diff(v2);
    cout << "v1-v2=";
    v4.show();

    VecD3 v5;
    v5 = v1.scalar_time(2);
    cout << "2*v2=";
    v5.show();

    double v6;
    v6 = v1.size();
    cout << "abs(v1)=" << v6;

    return 0;
}