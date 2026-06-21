// Misol 128
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x=0; double s=0;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i]; if(a[i]%2==0){x++;s+=a[i];}}
      s/=x;
       cout<<setprecision(2)<<fixed<<s;
return 0;
}
