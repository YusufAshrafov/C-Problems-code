// Misol 122
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n,s=0; double c=0;
    cin>>n;
                 int x[n];
   for(int i=1;i<=n;i++){
           cin>>x[i]; s+=pow(x[i],2);
           c+=x[i]; }
           c=c/n;
      cout<<s<<"\n";
      cout<<setprecision(2)<<fixed<<c;
       return 0;
}
