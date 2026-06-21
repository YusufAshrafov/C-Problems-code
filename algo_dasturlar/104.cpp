// mIsol 104
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n,x,min;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i];   if(i==1){min=a[1]; x=i;} 
      if(a[i]<min){min=a[i]; x=i;}}
   for ( int i=1;i<=n;i++){
       if(x!=n){
         if(i==x){cout<<a[n]<<" ";}
         if(i==n){cout<<min<<" ";}
     if(i!=x&&i!=n){
     cout<<a[i]<<" ";}}
  else{cout<<a[i]<<" ";}  }
return 0;
}
