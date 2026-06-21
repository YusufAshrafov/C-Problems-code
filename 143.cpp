// Misol 143
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
	      for(int i=0; i<n; ++i){
	         for(int k=m-1; k>=1; --k){
	           for(int j=0; j<k; ++j){
	        if( a[i][j]>a[i][j+1]){
	            int foo=a[i][j];
	            a[i][j]=a[i][j+1];
	            a[i][j+1]=foo;   } } } }
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        cout<<a[i][j]<<" "; }
	        cout<<"\n"; }
	return 0;
}
