#include <iostream>
#include <math.h>
using namespace std;

int a[101];

int main() {

    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cout << "Nhap vi tri phan tu can xoa: ";
    cin >> k;
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    n--;
    cout << "Mang sau khi xoa phan tu tai vi tri " << k << " la: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
