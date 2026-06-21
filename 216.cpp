// Misol 216
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double p,s,a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
	s=pow(x,1/6.0)+sqrt(a*a+b*b)+(log2(y)/log2(x))/(pow(c,3))-abs(sin(x)+cos(y))+2/5.0;
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}
