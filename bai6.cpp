#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cout << "Nhap so nguyen n va m: ";
    cin >> n >> m;
    long long sum = 0;
    for(int i = n; i <= m; i++){
        sum += i;
    }
    cout << "Tong cua cac so tu " << n << " den " << m << " la: " << sum << endl;
    return 0;
}