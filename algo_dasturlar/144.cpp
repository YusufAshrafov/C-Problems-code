// Misol 144
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;       int a[n][m];
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        cin>>a[i][j]; } }
	      for(int j=0; j<m; ++j){
	         for(int k=n-1; k>=1; --k){
	           for(int i=0; i<k; ++i){
	        if( a[i][j]<a[i+1][j]){
	            int foo=a[i][j];
	            a[i][j]=a[i+1][j];
	            a[i+1][j]=foo;   } } } }
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        cout<<a[i][j]<<" "; }
	        cout<<"\n"; }
	return 0;
}
