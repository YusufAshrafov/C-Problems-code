// mIsol 348
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   int n,m,s=0,k=0; double x;
   cin>>n>>m;    int a[n][m];
   for(int i=0;  i<n;  i++){
       for(int j=0;  j<m;  j++){
       cin>>a[i][j]; 
       if(a[i][j]>0){ k+=a[i][j]; }
       if(0>a[i][j]){ s+=a[i][j]; } } }
	   x=k/(1.0*s);
  	 cout<<setprecision(2)<<fixed<<x;
   return 0;	
}
