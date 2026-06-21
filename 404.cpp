// Misol 404
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,s=0,l=0,h;
	cin>>n;     int a[n][n];
	for(int i=0; i<n; i++){
	    for(int j=0; j<n; j++){
	        cin>>a[i][j]; }  }
	 h=n;
	 for(int i=0; i<n; i++){   h--;
	    for(int j=n-1; j>=0; j--){
	        if(j==h&&a[i][j]<0){ l++;  s+=a[i][j]; }}}
	cout<<l<<"\n"<<s;
	return 0;
}
