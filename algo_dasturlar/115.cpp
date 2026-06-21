// mIsol 115
#include <iostream>
#include<cmath>
using namespace std;
int main(){
   int n,v,s;
   cin>>n;
   int a[n];
   for ( int i=0;i<=n-1;i++){
        cin>>a[i];  }     cin>>v; 
      for ( int i=0;i<=n-1;i++){
          if(v>a[i]){s+=pow(a[i],2);}}
          cout<<s;
return 0;
}
