// mIsol 118
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,max=0; double s=0;
   cin>>n;
   int a[n];
   for ( int i=0;i<=n-1;i++){
      cin>>a[i]; 
      if(a[i]%2!=0){s+=a[i]; max++; }}
     if(max!=0) { s=s/max+0.000001;
       cout<<setprecision(2)<<fixed<<s;}
       if(max==0){max=1; s=s/max;
       cout<<setprecision(2)<<fixed<<s;}
return 0;
}
