// Misol 341
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,m=0,ma=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
            cin>>a[i]; if(a[i]%2==0){m++;}
           else{ma++;} }
           cout<<m<<" "<<ma;
  return 0;
}
