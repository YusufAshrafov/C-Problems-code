// mIsol 321
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
     int a,b; double s;
     cin>>a>>b;
     s=pow((a+b)/2.0,2);
     cout<<setprecision(2)<<fixed<<s;
  return 0;
}
