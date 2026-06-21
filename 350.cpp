// // misol -350
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
	int a,b,c;   float ma,mb,mc;
	cin >> a >> b >>c;
	mb=1/2.*(sqrt(2*(a*a+c*c) -b*b));
	ma=1/2.*(sqrt(2*(b*b+c*c) -a*a));
	mc=1/2.*(sqrt(2*(b*b+a*a) -c*c));
	cout<<setprecision(2)<<fixed<<ma<<" "<<mb<<" "<<mc;
	return 0;
}
