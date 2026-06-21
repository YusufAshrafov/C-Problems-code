// Misol 163
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n=0,m,x;  string str,k[500],s;
	getline(cin,str);
	str+=" ";
	  for(int i = 0; i < str.length(); i++){
    if(str[i] != ' ')
    k[n] += str[i];
    else n++;
  }
	for(int i=0; i<n; i++){    s=k[i];
	    if(i==0){ m=s.size();  x=i;  }
	    if(m<s.size()){ m=s.size();    x=i; } }
	    cout<<k[x];
	return 0;
}
