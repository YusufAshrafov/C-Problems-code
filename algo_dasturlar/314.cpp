// Misol 314
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int a,s=0,b,n;
   cin>>n>>a>>b;
   for(int x=1; x<=n; x++){
       s+=pow((a*x+b),2);   }
       cout<<s;
  return 0;
}
