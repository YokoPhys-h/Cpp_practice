/**
*    author:  YokoPhys
*    created: 2021/03/30 20:46:33
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
#include <algorithm>
#include <set>
#include <numeric>
#include <list>
using namespace std;

class Account
{
private:
    string full_name;
    string number;
    long crnt_balance;

public:
    Account(string name, string num, long amnt)
    {
        full_name = name;
        number = num;
        crnt_balance = amnt;
    }

    string name()
    {
        return full_name;
    }
    string no()
    {
        return number;
    }
    long balance()
    {
        return crnt_balance;
    }
    void deposit(long amnt)
    {
        crnt_balance += amnt;
    }
    void withdraw(long amnt)
    {
        crnt_balance -= amnt;
    }
};

int main()
{
    Account suzuki("鈴木隆一", "12345678", 1000);
    cout << suzuki.name();

    return 0;
}