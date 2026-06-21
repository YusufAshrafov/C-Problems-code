// Misol 309
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int n,x,y;double s=0;
    cin>>n>>x>>y;
    for(int i=1; i<=n; i++){
        s+=(log2(pow(y,2*i-1))/log2(x))/(pow(2,i));}
            cout<<setprecision(2)<<fixed<<s;
  return 0;
}
