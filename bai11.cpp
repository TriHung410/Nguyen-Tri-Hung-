#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int m,n;
    cout << "Nhap so nguyen n va m: ";
    cin >> m >> n;
    long long multi = 1;
    for(int i = m; i <= n; i++){
        multi *= i;
    }
    cout << "Tich cua cac so tu " << m << " den " << n << " la: " << multi << endl;
    return 0;
}
