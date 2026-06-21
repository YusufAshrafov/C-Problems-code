// mIsol 500
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ double l,t,g=9.81; 
cin>>l;
      t=(2*M_PI*sqrt(l/g));   
	cout<<setprecision(4)<<fixed<<t;
	return 0;
}
