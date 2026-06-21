// 110 misol
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,m,k,s=1;
cin>>n;
int a[n];
   for(int i=0;i<=n-1;i++){
       cin>>a[i];}cin>>k>>m;
   for(int i=0;i<=n-1;i++){
       if(a[i]==k){
           s*=k;}
           if(a[i]==m){
           s*=m;}}
           cout<<s;
       return 0;
}
