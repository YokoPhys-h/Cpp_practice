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

    VecD3 add(const VecD3 &v)
    {
        VecD3 u;
        u.x = x + v.x;
        u.y = y + v.y;
        u.z = z + v.z;

        return u;
    }

    VecD3 diff(const VecD3 &v)
    {
        VecD3 u;
        u.x = x - v.x;
        u.y = y - v.y;
        u.z = z - v.z;

        return u;
    }

    VecD3 scalar_time(const double a)
    {
        VecD3 u;
        u.x = a * x;
        u.y = a * y;
        u.z = a * z;

        return u;
    }

    double size()
    {
        double u;
        u = sqrt(x * x + y * y + z * z);
        return u;
    }
};

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