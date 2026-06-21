// Misol 114
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
   int n;double s=1;
   cin>>n;
   int a[n];
   for ( int i=0;i<=n-1;i++){     cin>>a[i];  
             if(a[i]%2==0||a[i]%5==0){s*=a[i]; }}
    s=sin(s);
          cout<<setprecision(2)<<fixed<<s;
return 0;
}
