// Misol 324
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n; double x,s=0;
	cin>>n>>x;
	for(int i=1;i<=n; i++){
	    s+=pow(-1.0,i-1)*1/(i*1.0)*cos(i*x);
	}
	cout<<setprecision(2)<<fixed<<s;
	return 0;
}
