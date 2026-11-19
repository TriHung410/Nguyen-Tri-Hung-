#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a, b, c;
cout << "nhap a,b,c:";
cin>>a>>b>>c;
float delta= b*b-4*a*c;
if (delta < 0 ){
    cout<<"phuong trinh vo nghiem"<<endl;

} else if (delta == 0) {
float x= -b/(2*a);
cout<< "phuong trinh co nghiem kep x="<<x<<endl;

} else {
float x1 = (-b + sqrt(delta))/(2*a);
float x2 = (b + sqrt(delta))/(2*a);
cout << "phuong trinh co hai nghiem phan biet: x1 = " << x1 << ", x2=" << x2 <<endl;
}
  return 0;

}
