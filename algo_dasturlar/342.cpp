// mIsol 342
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s; int x=0;
	getline(cin,s);
	for(int i=0; i<s.length();i++){
	    if(s.at(i)=='u'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='U'||s.at(i)=='A'||s.at(i)=='O'||s.at(i)=='I'||s.at(i)=='E'){ x++; } }
	    cout<<x;
	return 0;
}
