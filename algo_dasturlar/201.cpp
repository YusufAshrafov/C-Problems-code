// Misol 201
#include<iostream>
using namespace std;
int main()
{int x,y,a,s2=0,s=0;
cin>>x>>y;
baaa:
while(x>0) {
    s+=x%10;
    x=x/10;
   }  if(s>9){ x=s; s=0; goto baaa;}
   baa:
while(y>0) {
    s2+=y%10;
    y=y/10;
   }  if(s2>9){ y=s2; s2=0; goto baa;}
cout<<s<<" "<<s2;
    return 0;
}
