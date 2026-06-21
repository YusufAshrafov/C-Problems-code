// Misol 147
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str; int a=0,y=0;
	cin>>str;
//	getline(cin,str);
	for(int x=0; x<str.length(); x++){
	    if(str.at(x)=='A'){a++;}
	     if(str.at(x)=='Y'){y++;}}
	     cout<<a<<" "<<y;
	return 0;
}
