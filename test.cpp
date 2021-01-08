/**
*    author:  Haruto Yokoyama
*    created: 2021/01/08 14:13:57
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

#include "factrial.h"
using namespace std;

int main()
{
    int x;
    cout << "整数値:";
    cin >> x;
    cout << x << "の階乗は" << factrial(x) << "です\n";
    return 0;
}