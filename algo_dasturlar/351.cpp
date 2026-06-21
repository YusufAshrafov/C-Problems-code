// Misol 351
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	 int a,b,c;      double m1,m2,m3;
	 cin>>a>>b>>c;
	 m1=1/2.0*sqrt(2*b*b+2*c*c-a*a);
	 m2=1/2.0*sqrt(2*a*a+2*c*c-b*b);
	 m3=1/2.0*sqrt(2*b*b+2*a*a-c*c);
	cout<<setprecision(2)<<fixed<<m1;
	cout<<" ";
	cout<<setprecision(2)<<fixed<<m2;
	cout<<" ";
	cout<<setprecision(2)<<fixed<<m3;
	return 0;
}
