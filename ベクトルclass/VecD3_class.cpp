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

VecD3 VecD3 ::add(const VecD3 &v)
{
    VecD3 u;
    u.x = x + v.x;
    u.y = y + v.y;
    u.z = z + v.z;

    return u;
}

VecD3 VecD3 ::diff(const VecD3 &v)
{
    VecD3 u;
    u.x = x - v.x;
    u.y = y - v.y;
    u.z = z - v.z;

    return u;
}

VecD3 VecD3 ::scalar_time(const double a)
{
    VecD3 u;
    u.x = a * x;
    u.y = a * y;
    u.z = a * z;

    return u;
}

double VecD3 ::size()
{
    double u;
    u = sqrt(x * x + y * y + z * z);
    return u;
}