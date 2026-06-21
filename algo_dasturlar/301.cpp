// mIsol 301
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{int x,y;double w;
cin>>x>>y;
w=(pow(y,x-5)+sqrt(pow((pow(x,y-5)+pow(y+5,x)),x-y)))/(pow(x+1,y-7)+x*y);
	cout<<setprecision(2)<<fixed<<w;
	return 0;
}
