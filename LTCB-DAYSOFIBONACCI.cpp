#include <iostream>
using namespace std;

/**
 * Ham main
 */
int main() {
    int a = 1, b = 1, tong, soluong;

    cout << "Nhap so luong so dau day Fibonacci: "; cin >> soluong; //1 1 2 3 5 8
    cout <<"1 1 ";
    for (int i = 1; i <=soluong -2; i++) {
        tong = a + b;
        cout << tong << " "; //1 1 2
        a = b;
        b = tong;
    }
    return 0;
}

