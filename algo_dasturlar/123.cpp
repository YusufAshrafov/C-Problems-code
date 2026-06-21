// Misol 123
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,s=0; double c,a;
    cin>>n;
                 int x[n];
   for(int i=1;i<=n;i++){
           cin>>x[i]; if(i%2==0){s+=x[i];}}a=s;
   for(int i=1;i<=n;i++){
           if(x[i]%2==0||x[i]<0){c=x[i];
      cout<<setprecision(2)<<fixed<<c<<" ";}
else{c=x[i]/a; cout<<setprecision(2)<<fixed<<c<<" ";}}
       return 0;
}
