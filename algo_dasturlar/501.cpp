// mIsol 501
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ double m,t; int k;
cin>>m>>k;
      t=1/(2*M_PI*sqrt(m/k));   
	cout<<setprecision(4)<<fixed<<t;
	return 0;
}
