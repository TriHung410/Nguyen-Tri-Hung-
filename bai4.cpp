#include <iostream>
#include <math.h>
using namespace std;

void check(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Ba canh vua nhap tao thanh mot tam giac." << endl;
    } else {
        cout << "Ba canh vua nhap KHONG tao thanh mot tam giac." << endl;
    }
}

void kieutamgiac(float a, float b, float c) {
    if (a == b && b == c) {
        cout << "Tam giac deu." << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Tam giac can." << endl;
    } else {
        cout << "Tam giac thuong." << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a, b, c;
    cout << "Nhap ba canh a, b, c: ";
    cin >> a >> b >> c;
    check(a, b, c);
    kieutamgiac(a, b, c);
    return 0;
}