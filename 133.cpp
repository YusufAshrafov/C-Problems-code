// mIsol 133
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,n,p=0;
	cin>>n;   int c[n][n],a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>c[i][j];   } }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];   } }
         int k[n][n+n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][p]=c[i][j];   p++; }
        for(int l=0; l<n; l++ ){
            k[i][p]=a[i][l];   p++; }  p=0;  }
        for(int i=0; i<n; i++){
            for(int j=0; j<2*n; j++){
                cout<<k[i][j]<<" "; }
                cout<<"\n"; }
	return 0;
}
