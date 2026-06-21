// Misol 105
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x,c=0,y;double s=0;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i];  }
      cin>>x>>y;
         for ( int i=1;i<=n;i++){
             if(i<x||i>y){s+=a[i]; c++;}}
             s=s/c;
             cout<<setprecision(2)<<fixed<<s;
return 0;
}
