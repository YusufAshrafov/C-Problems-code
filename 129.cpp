// mIsol 129
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
   int n, s=0;
   cin>>n;
   int a[n];
   for ( int i=1;i<=n;i++){
      cin>>a[i]; if(a[i]%2==0||a[i]%3==0||a[i]%5==0){s+=a[i];}}
      cout<<s;
return 0;
}
