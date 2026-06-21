// Misol 120
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,c=0,a,b;
    cin>>n;
                 int x[n];
   for(int i=1;i<=n;i++){
           cin>>x[i];  }
            cin>>a>>b;
   for(int i=1;i<=n;i++){
      if(x[i]>=a&&x[i]<=b){}
      else{c++;}}
      cout<<c;
       return 0;
}
