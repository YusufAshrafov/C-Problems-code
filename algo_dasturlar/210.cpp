// Misol 210
#include<iostream>
using namespace std;
int main()
{
 int n,min,s;
	cin>>n;      int a[n];
	for(int i=0; i<n; i++){
	    cin>>a[i]; }
	for(int i=n-1; i>=1; --i){
	    for(int j=0; j<i; ++j){
	     if(a[j]>a[j+1]){ 
	     int foo=a[j];    a[j]=a[j+1];     a[j+1]=foo; }}} 
cout<<endl; 
	     for(int i=0; i<n; i++){ 
	      cout<<a[i]<<" "; }
	return 0;
}
