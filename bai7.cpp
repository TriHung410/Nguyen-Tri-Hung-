#include <iostream>
#include <math.h>
using namespace std;

int main() {
   
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    float x_n = n/2;
    for(int i = 1; i <n; i++){
       float x_n1 = (x_n + n/x_n)/2;
       x_n = x_n1;
    }
    cout << "Can bac hai cua " << n << " la: " << x_n << endl;
    return 0;
}
