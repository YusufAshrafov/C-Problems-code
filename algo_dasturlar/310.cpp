// Misol 310
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int n,x,y;double s=0;
    cin>>n>>x;
    for(int i=1; i<=n; i++){
        s+=i/pow(x,i);}
            cout<<setprecision(2)<<fixed<<s;
  return 0;
}
