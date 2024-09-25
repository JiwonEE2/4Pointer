/*	2
[ 문제 ]
정수 공간 5개를 배열로 동적 할당받고, 정수를 5개 입력받아 평균을 구하고 출력한 뒤 배열을 소멸시키도록 main() 함수를 작성하라.

[ 실행 결과 ]
정수 5개 입력>>1 2 4 5 10
평균 4.4
*/
#include<iostream>
using namespace std;

int main() {
    cout << "정수 5개 입력>>";
    int* array = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }
    cout << "평균 " << sum / 5;
    delete[] array;
}