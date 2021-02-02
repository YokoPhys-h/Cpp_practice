/**
*    author:  Haruto Yokoyama
*    created: 2021/02/02 15:06:42
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
    vector<vector<double>> A = {{1, 2, 3}, {1, 2, 3}};
    cout << "行列A\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << A[i][j];
        }
        cout << "\n";
    }

    return 0;
}