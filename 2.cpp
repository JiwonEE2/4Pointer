/*	2
[ ���� ]
���� ���� 5���� �迭�� ���� �Ҵ�ް�, ������ 5�� �Է¹޾� ����� ���ϰ� ����� �� �迭�� �Ҹ��Ű���� main() �Լ��� �ۼ��϶�.

[ ���� ��� ]
���� 5�� �Է�>>1 2 4 5 10
��� 4.4
*/
#include<iostream>
using namespace std;

int main() {
    cout << "���� 5�� �Է�>>";
    int* array = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }
    cout << "��� " << sum / 5;
    delete[] array;
}