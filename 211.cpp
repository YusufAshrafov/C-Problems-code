// Misol 211
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,g;
	cin>>n>>m;       int a[n],b[m],c[m+n];
     for(int i=0; i<n; i++){
        cin>>a[i]; }
     for(int i=0; i<m; i++){
        cin>>b[i]; }
     for(int i=0; i<n; i++){
             c[i]=a[i];    g=i;  }
   for(int j=0; j<m; j++){   g++;   c[g]=b[j]; }
   for(int i=n+m-1; i>=1; i--){
       for(int j=0; j<i; j++){
                if( c[j]>c[j+1]){
	            int foo=c[j];
	            c[j]=c[j+1];
	            c[j+1]=foo;   }  }  }
   for(int i=0; i<n+m; i++){
	            cout<<c[i]<<" ";  }
	return 0;
}
