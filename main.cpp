#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 float a, b, c, CV, q, S;
 cout << "nhap do dai ba canh trong tam giac" ;
 cin >> a >> b >> c;
  CV = (a + b + c);
  q = CV/2;
  S = sqrt(q * (q-a) * (q-b) * (q-c));
  cout << "chu vi tam giac = "<< CV << endl;
  cout << "dien tich tam giac = "<< S << endl;
  return 0;

}
