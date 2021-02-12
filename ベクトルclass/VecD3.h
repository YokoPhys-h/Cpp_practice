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

using namespace std;

class VecD3
{
private:
    double x, y, z;

public:
    VecD3(double xx = 0.0, double yy = 0.0, double zz = 0.0)
    {
        x = xx;
        y = yy;
        z = zz;
    }

    ~VecD3() {}

    void show()
    {
        cout << "(" << x << "," << y << "," << z << ")\n";
    }

    VecD3 add(const VecD3 &v);

    VecD3 diff(const VecD3 &v);

    VecD3 scalar_time(const double a);

    double size();
};