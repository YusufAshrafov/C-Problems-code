// mIsol 160
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int s,p;  string str; char a;
	getline(cin,str);
	for(int i=0; i<str.length(); i++){
	    if(str.at(i)>='A' && str.at(i)<='Z'){
	        a=str.at(i)+32;    cout<<a; }
	    if(str.at(i)>='a' && str.at(i)<='z'){
	        a=str.at(i)-32;  cout<<a; }
	    if(str.at(i)==' '){ cout<<" "; } }
	return 0;
}
