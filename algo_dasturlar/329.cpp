// Misol 329
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n,x; double s=0;
	cin>>n>>x;
	for(int i=1; i<=n; i++){
	    s+=pow(x,i)/sqrt(i*x);}
	    cout<<setprecision(2)<<fixed<<s;
	return 0;
}
