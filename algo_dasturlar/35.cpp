// //#algo0035. Tarmoqlanuvchi 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,b,c;
  cin>>a>>b>>c;
  if(a>=b&&b>=c){
    cout<<a*2<<" "<<b*2<<" "<<c*2;
  }else
  {
    cout<<abs(a)<<" "<<abs(b)<<" "<<abs(c);
    }
  return 0;
}
