// mIsol 204
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,s=0,a,b;
    cin>>n;    int d[n];
    for(int i=1; i<=n; i++){
        cin>>d[i]; }
        cin>>m;    int k[m];
    for(int i=1; i<=m; i++){
        cin>>a>>b;  
        for(int j=a; j<=b; j++){
            s+=d[j]; 
            if(j==b){ k[i]=s; s=0; } } }
	for(int i=1; i<=m; i++){
	    cout<<k[i]<<"\n"; }
	    return 0;
}
