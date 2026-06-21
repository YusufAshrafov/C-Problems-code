// Misol 340
#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n,max,min,s=1;
  cin>>n;   int a[n];
  for(int i=0; i<n; i++){
           cin>>a[i]; 
       if(i==0){ max=a[i]; min=a[i]; }
       if(a[i]>max){ max=a[i]; }
        if(a[i]<min){ min=a[i]; } } 
   for(int i=0; i<n; i++){
        if(a[i]>=0){ s=min*a[i]; cout<<s<<" "; }
        else if(a[i]<0){ s=max*a[i]; cout<<s<<" "; } }
  return 0;
}
