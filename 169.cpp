// Misol 169
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double min(double a,double b){
    double j;
    if(a<b){j =a; }
    else { j =b; }
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
	double a,b,u,v,s;
		cin>>a>>b;
		u=min(a,b); 
		v=min(a*b,max(a,b));
		s=min(u+v,3.14);
	cout<<setprecision(2)<<fixed<<u<<" ";
		cout<<setprecision(2)<<fixed<<v<<" ";
			cout<<setprecision(2)<<fixed<<s;
	return 0;
}
