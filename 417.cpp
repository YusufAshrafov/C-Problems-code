// //misol-417 18.03.2021col
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cin>>n;    int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
      	  if((i+j)%2==0){
      	  	a[i][j]=0;
      	  }
      	  else{
      	  	a[i][j]=1;
      	  }
      	  cout<<a[i][j]<<" ";
	     }    
	     cout<<"\n";
	 }
	return 0;
}
