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

double func(double x)
{
    double y;
    y = x * x - 4;

    return y;
}

double funcd(double x)
{
    double y;
    y = 2 * x;

    return y;
}