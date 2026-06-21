// Misol 170
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double h(double a,double b){
    double j;
    j=a/(b*b+1.0)+b/(a*a+1.0)-pow((a-b),3);
    return j;
}
double max(double a,double b){
    double x;
    if(a>b){x=a; }
    else { x =b; }
    return x;
}
int main()
{
	double t,n,s;
	cin>>s>>t;
	n=h(s,t)+max(h(s-t,s*t),h(s-t,s+t))+h(1.0,1.0);
	cout<<setprecision(2)<<fixed<<n;
	return 0;
}
