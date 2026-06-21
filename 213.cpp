// mIsol 213
#include<iostream>
using namespace std;
int main()
{
int n,s=0,max;
	cin>>n;      int a[n];
	for(int i=0; i<n; i++){
	    cin>>a[i]; 
	    if(i==0){ max=a[0]; }
	    if(max<a[i]){ max=a[i]; } }
	for(int i=0; i<n; i++){
	    if(max==a[i]){ s++; } }
	    cout<<max<<" "<<s;
	return 0;
}
