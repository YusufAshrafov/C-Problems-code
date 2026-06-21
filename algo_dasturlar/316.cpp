// mIsol 316
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int a; double s=0;
   cin>>a;
   for(int i=1;i<=a; i++){
     s+=(cos(i))/i;}
     cout<<setprecision(2)<<fixed<<s;
  return 0;
}
