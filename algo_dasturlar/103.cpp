// Misol 103
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x,y,z=0;double s;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i];   } cin>>x>>y;   
     for ( int i=x;i<=y;i++){
     s+=a[i]; z++; }      s=s/z;
     cout<<setprecision(1)<<fixed<<s;
return 0;
}
