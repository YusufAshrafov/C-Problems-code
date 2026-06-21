// Misol 174.
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n,x,y,k;
	cin>>n>>k; 
	  int a[n][n],b[n][n],c[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int u=0; u<k-1; u++){
 for(int o=0; o<n; o++){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		x+=(a[i][j]*b[j][o]);
	  	}
	  	c[i][o]=x;   x=0;
  	}
   }
   for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			b[i][j]=c[i][j];
			c[i][j]=0;
		}
   }
}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
		return 0;
}
