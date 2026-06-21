// Misol 305
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int x,n ; double y=0;
  cin>>x>>n;
  for(int i=1;i<=n; i++){
      y+=pow((x+1.0),1/(i*1.0));}
  cout<<setprecision(2)<<fixed<<y;
  return 0;
}
