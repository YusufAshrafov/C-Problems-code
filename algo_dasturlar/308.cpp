// Misol 308
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int n,x; double s=0;
    cin>>n>>x;
    for(int i=0; i<=n; i++){
        if(i==0){i=1;}
            s+=(pow(x,i)*((i+1)));}
            cout<<s;
  return 0;
}
