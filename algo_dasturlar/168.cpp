// Misol 168
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double max(double a,double b){
    double j;
    if(a>b){ j=a; }
    else { j=b; }
    return j;
}
int main()
{
	double a,b,c; double s;
		cin>>a>>b>>c;
	s=(max(a,a+b)+max(a,b+c))/(1+max(a+b*c,1.15));
	cout<<setprecision(2)<<fixed<<s;
	return 0;
}
