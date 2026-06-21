// 106 misol algo.tuit.com
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,s=0;
cin>>n;
int a[n];
   for(int i=0;i<=n-1;i++){
       cin>>a[i]; s+=pow(a[i],2);}
       cout<<s;
       return 0;
}
