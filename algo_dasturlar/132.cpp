// Misol 132
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,a,n,p=0;
	cin>>n;   int c[n];
    for(int i=0; i<n; i++){
        cin>>c[i];   }
        cin>>a>>b;    int k[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(n-1>=p){  k[i][j]=c[p];   p++;  }
            else{  k[i][j]=0;  } }  }
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cout<<k[i][j]<<" "; }
                cout<<"\n"; }
	return 0;
}
