/**
*    author:  Haruto Yokoyama
*    created: 2021/01/05 16:55:02
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int i;
    int j;

    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << setw(3) << i*j;
        }
        cout << "\n";
    }

   return 0;
}