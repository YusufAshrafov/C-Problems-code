// misol 402
#include<iostream>
#include<cmath>
using namespace std;
int main()
{int x,s=0,b=0;
cin>>x;
int a[x];
for(int i=0;i<=x-1;i++){
    cin>>a[i];
    if(a[i]>0){s++;}
    else{b++;}}
    cout<<b*s;
    return 0;
}
