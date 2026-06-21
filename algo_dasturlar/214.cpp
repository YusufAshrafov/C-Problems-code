// Misol 214
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;   double p,s;
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<setprecision(3)<<fixed<<s;
	return 0;
}
