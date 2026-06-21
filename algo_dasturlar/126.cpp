// Misol 126
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n; double s=0;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i]; s+=a[i];}
        s/=n;    
          for ( int i=1;i<=n;i++){
              if(a[i]<0){cout<<setprecision(2)<<fixed<<log(s)<<" ";}
else if(a[i]>=0){cout<<setprecision(2)<<fixed<<a[i]*1.00<<" ";}}
return 0;
}
Musol 127
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x,y;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i]; }     y=a[1];
    for ( int i=1;i<=n;i++){    
      if(y>a[i]){y=a[i];}}
     for ( int i=1;i<=n;i++){
         if(a[i]<0) {x=pow(y,2);
             cout<<x<<" ";}
             if(a[i]>=0){cout<<a[i]<<" ";}}
return 0;
}
