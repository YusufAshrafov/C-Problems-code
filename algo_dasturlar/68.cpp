// //#algo0068. Sikl8
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double s,n,x,p;
cin>>n>>x;
s=0;p=1;
for(int i=1;i<=n;i++) {p*=i; s+=pow(x,i)/p;
}
cout.precision(3);
cout<<fixed<<s;
return 0;
}
