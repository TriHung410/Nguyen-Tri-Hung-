#include <iostream>
#include <math.h>
using namespace std;

void giaithua(int n){ 
    long long ketqua = 1;
    for(int i = 1; i <= n; i++){
        ketqua *= i;
    }
    cout << "Giai thua cua " << n << " la: " << ketqua << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    giaithua(n);
    return 0;
}