#include <iostream>
#include <cmath>
using namespace std;
void dientichday(float r, float h){
float S= 2 * 3.14 * r * r;
cout<< "Dien tich day = "<< S << endl;

}
void dientichxungquanh(float r, float h) {
float S=2 * 3.14 * r * h;
cout<<"dien tich xung quanh = "<< S << endl;

}
void thetich(float r, float h){
float V= 3.14 * r * r * h;
cout<< "the tich = "<< V << endl;
}
int main()
{
 float r, h;
 cout<<" Nhap ban kinh r va chieu cao h";
 cin>> r >> h;
 dientichday(r, h);
 dientichxungquanh(r, h);
 thetich(r, h);
 return 0;

}
