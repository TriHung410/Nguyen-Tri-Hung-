#include <iostream>
#include <math.h>
using namespace std;

void ucln(int a, int b){ 
    while( b !=0 ){ 
        int t = b;
        b = a % b;
        a = t;
    }
    cout << "Uoc chung lon nhat la: " << a << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cout << "Nhap hai so nguyen a va b: ";
    cin >> a >> b;
    ucln(a, b);
    return 0;
}