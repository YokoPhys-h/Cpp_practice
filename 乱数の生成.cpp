#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int lucky = rand();
    int max = RAND_MAX;

    cout << "���b�L�[�i���o�[��" << max << "�ł�" << endl;
    /*
    stand(����) : �����̎�ނ�p����
    time(NULL) : ���݂̎�������Ƃ��������̎�����
    -> stand(time(NULL))
    */
}