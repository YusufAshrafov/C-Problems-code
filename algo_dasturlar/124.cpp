// Misol 124
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,max,m;
    cin>>n;     int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; 
        if(i==0){ max=a[0]; m=i;}
        if(a[i]>max){ max=a[i]; m=i;}
    }
        cin>>k;
        for(int i=0; i<n; i++){
            if(i==k-1){
                     cout<<max<<" "; }
               else if(i==m || max==a[i]){
                     cout<<a[k-1]<<" "; }
                     else{ 
                     cout<<a[i]<<" "; } 
        }
	return 0;
}
