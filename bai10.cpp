#include <iostream>
#include <math.h>
using namespace std;

void check(int n) { 
    for(int i = 2; i <= sqrt(n); i++){ 
        if (n % i == 0) {
            cout << n << " khong phai la so nguyen to." << endl;
            return;
        }     
    }
    cout << n << " la so nguyen to." << endl;
}

int main() {

    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n < 2) {
        cout << n << " khong phai la so nguyen to." << endl;
    } else {
        check(n);
    }
    return 0;
}
