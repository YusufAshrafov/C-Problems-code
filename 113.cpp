// Misol 113
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
   int n;
   double c=0;
   cin>>n;
   int a[n],s=0;
   for ( int i=0;i<=n-1;i++){     cin>>a[i];  
             if(a[i]<0){s+=a[i]; c++;}}
          cout<<setprecision(2)<<fixed<<s/c;
return 0;
}
