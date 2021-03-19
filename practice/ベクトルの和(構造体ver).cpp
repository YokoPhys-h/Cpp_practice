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

struct vec3
{
    double x, y, z;
};

vec3 set(double x, double y, double z)
{
    vec3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void show(const vec3 &v)
{
    cout << "(" << v.x << "," << v.y << "," << v.z << ")\n";
}

vec3 add(const vec3 &v1, const vec3 &v2)
{
    vec3 u;
    u.x = v1.x + v2.x;
    u.y = v1.y + v2.y;
    u.z = v1.z + v2.z;
    return u;
}

int main()
{
    vec3 v1, v2;
    v1 = set(3, 4, 5);
    v2 = set(3, 2, 1);
    show(v1);
    show(v2);

    vec3 v;
    v = add(v1, v2);
    show(v);
    return 0;
}