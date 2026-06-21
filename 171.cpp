// Misol 171
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int x(int c[],int t)
{ 
    int s=0;
    for(int i=1;i<=t;i++){
    s+=c[i];  }
    return s;
}    
int main(){
    int n,a,b; double w;
 cin>>n;     int c[n];
 for(int i=1; i<=n; i++){
        cin>>c[i]; }
        cin>>a>>b;
   w=(x(c,b-a)+x(c,a))/(1.0*pow((x(c,b)-x(c,4)),2));
 cout<<setprecision(2)<<fixed<<w;
 return 0;
}
