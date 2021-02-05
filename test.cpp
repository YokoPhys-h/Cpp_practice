/**
*    author:  Haruto Yokoyama
*    created: 2021/02/02 23:06:32
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

int main()
{
    double f;
    double x, y;
    ofstream ofs("data.txt");
    if (!ofs)
    {
        cout << "出力ファイルをオープンできません\n";
        return 1;
    }

    cout << "x"
         << " "
         << "y"
         << " "
         << "f(x,y)"
         << "\n";

    ofs << "x"
        << " "
        << "y"
        << " "
        << "f(x,y)"
        << "\n";

    for (double i = -10; i <= 10; i++)
    {
        for (double j = -10; j <= 10; j++)
        {
            x = i;
            y = j;
            f = exp(-x * x) * exp(-y * y);
            cout << x << " " << y << " " << f << "\n";
            ofs << x << " " << y << " " << f << "\n";
        }
    }

    ofs.close();

    return 0;
}