// mIsol 302
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ double x,s; 
cin>>x;
      s=exp(2)+(exp(x))/12+pow(2,x+1)+log2(pow(x,x+20))/log2(x);
	cout<<setprecision(2)<<fixed<<s;
	return 0;
}
Musol 303
#include<iostream>
using namespace std;
int main()
{  
char s; double x,y;
cin>>x>>y;
if(x<y){s='<';
cout<<s;}
if(x>y){s='>';
cout<<s;}
if(x==y){s='=';
cout<<s;}
	return 0;
}
Misil 304
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int a,b,c; double x;
  cin>>a>>b>>c;
  x=((a+b+c)/3.0)*cbrt(a*b*c);
  cout<<setprecision(1)<<fixed<<x;
  return 0;
}
