#include <iostream>
#include <math.h>
using namespace std;

int a[101];
int n;

float average(int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return (float)sum / n;
}

void gtnn(int n){ 
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << "Gia tri nho nhat cua mang la: " << min << endl;
}

void checkso(int n){
    int duong = 0;
    int am = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            duong++;
        }
        if(a[i] < 0){
            am++;
        }
        if(a[i] == 0){
            count++;
        }
    }
    cout << "So luong so duong trong mang la: " << duong << endl;
    cout << "So luong so am trong mang la: " << am << endl;
    cout << "So luong so 0 trong mang la: " << count << endl;
}

void erase(int &n){
    float t = average(n);
    for(int i = 0; i < n; i++){
        if (a[i] > t){
            for(int j = i; j < n - 1; j++){
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main(){

    int k;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap gia tri k: ";
    cin >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    average(n);
    gtnn(n);
    checkso(n);
    erase(n);
    cout << endl;
    return 0;
}
