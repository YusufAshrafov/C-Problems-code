// 101 misol
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int b=0,n;double o1=0,o2=0;
cin>>n;
int a[n];
   for(int i=0;i<=n-1;i++){
       cin>>a[i]; o1+=a[i];}
       o1=o1/n;
   for(int i=0;i<=n-1;i++){
      if(o1>a[i]){o2+=a[i];b++;}}
      o2=o2/b;
           cout<<setprecision(2)<<fixed<<o2;
       return 0;
}
