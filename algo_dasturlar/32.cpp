// //#algo0032. Tarmoqlanuvchi2
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double x,y,z;
  cin>>x>>y>>z;
  if(x>y&&y>z)
  {
    cout<<x<<" "<<z;
  }
         else
      if(x>z&&z>y)   
     {
       cout<<x<<" "<<y;
       }  
       else
    if(y>x&&x>z)
       {
         cout<<y<<" "<<z;
       }
       else
       if(y>z&&z>x)
       {
         cout<<y<<" "<<x;
     }
     else 
     if(z>x&&x>y)
     {
       cout<<z<<" "<<y;
     }
     else
    cout<<z<<" "<<x;
  return 0;
}
