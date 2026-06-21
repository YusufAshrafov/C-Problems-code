// Misol 139
#include<iostream>
using namespace std;
int main(){
int x,y,n,m;
cin>>n>>m;    int a[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    cin>>a[i][j];
    if(a[i][j]<0){x=i; y=j;}}}
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(i!=x&&j!=y){cout<<a[i][j]<<" ";}}
        cout<<"\n";}
return 0;
}
