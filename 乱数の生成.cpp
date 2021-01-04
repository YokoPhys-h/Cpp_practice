#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int lucky = rand();
    int max = RAND_MAX;

    cout << "ラッキーナンバーは" << max << "です" << endl;
    /*
    stand(数字) : 乱数の種類を用いる
    time(NULL) : 現在の時刻を基準とした乱数の種を作る
    -> stand(time(NULL))
    */
}