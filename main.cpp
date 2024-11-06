#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  double s,b,x,y,z,otvet;
    cout<< "Vvedite x=";
     cin>>x;
    cout<< "Vvedite y=";
     cin>>y;
    cout<< "Vvedite z=";
     cin>>z;
  a = fabs(pow(x, (y / x)) - pow((y / x), 1/3.));
  b = (cos(y) - z / (y - x)) / (1 + pow((y - x),2));
   otvet = a + (y - x) * b;
  cout<<"Otvet:" <<otvet<<endl;
  
  return 0;
}
