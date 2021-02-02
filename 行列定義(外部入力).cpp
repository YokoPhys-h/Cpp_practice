/**
*    author:  Haruto Yokoyama
*    created: 2021/01/06 16:55:02
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
using namespace std;

int main()
{
    int k,l;
    cout << "行列の要素数を決めます\n";
    cout << "足し算する2つの行列の行数は:";
    cin >> k;
    cout << "足し算する2つの行列の列数は:";
    cin >> l;

    const int p=k;
    const int q=l;
    vector<vector<int> > a(k, vector<int>(l));
    vector<vector<int> > b(k, vector<int>(l));
    vector<vector<int> > c(k, vector<int>(l));

    cout << "行列aの値を入力\n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "a[" << i << "][" << j << "]は:";
            cin >> a[i][j];
        }
    }

    cout << "行列a\n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << "\n";
    }
        cout << "行列bの値を入力\n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "b[" << i << "][" << j << "]は:";
            cin >> b[i][j];
        }
    }

    cout << "行列b \n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << setw(3) << b[i][j];
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "足し算a+bの結果は \n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << setw(3) << c[i][j];
        }
        cout << "\n";
    }

    return 0;
}