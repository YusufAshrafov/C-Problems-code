// Misol 349
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n,s,k=1; double x;
   cin>>n>>s;    int a[n];
   for(int i=0;  i<n;  i++){
       cin>>a[i]; 
       if(s>a[i]){ k*=a[i]; } }
	   cout<<k;
   return 0;	
}
